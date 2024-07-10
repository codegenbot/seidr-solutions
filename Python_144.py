```
x = '"{}"'.format(input("Enter the fraction x (in the format 'a/b'): "))
n = '"{}"'.format(input("Enter the fraction n (in the format 'c/d'): "))

import math

def simplify(x, n):
    x_num, x_denom = map(int, x[3:-1].split('/'))
    n_num, n_denom = map(int, n[3:-1].split('/'))

    if x_denom == 0 or n_denom == 0:
        return "Error: Division by zero is not allowed"

    common_divisor = lambda a, b: math.gcd(a, b)
    gcd = common_divisor(x_num, x_denom)

    simplified_x_num = x_num // gcd
    simplified_x_denom = x_denom // gcd if gcd == x_denom else 1

    gcd = common_divisor(n_num, n_denom)
    simplified_n_num = n_num // gcd
    simplified_n_denom = n_denom // gcd if gcd == n_denom else 1

    return simplified_x_num, simplified_x_denom, simplified_n_num, simplified_n_denom

result = simplify(x, n)
print(result)