```python
x = "{}".format('"{}"'.format(input("Enter the fraction x (in the format 'a/b'): ")))
n = "{}".format('"{}"'.format(input("Enter the fraction n (in the format 'c/d': ")))

x = x.strip('"')  
n = n.strip('"')  

import math
def simplify(x, n):
    x_num, x_denom = map(int, x[3:-1].split("/"))
    y_num, y_denom = map(int, n[3:-1].split("/"))

    if x_denom == 0 or y_denom == 0:
        return "Error: Division by zero is not allowed"

    common_divisor = lambda a, b: math.gcd(a, b)
    gcd = common_divisor(x_num, x_denom)

    simplified_x_num = x_num // gcd
    simplified_x_denom = x_denom // gcd if gcd == x_denom else 1

    gcd = common_divisor(y_num, y_denom)
    simplified_y_num = y_num // gcd
    simplified_y_denom = y_denom // gcd if gcd == y_denom else 1

    return simplified_x_num, simplified_x_denom, simplified_y_num, simplified_y_denom

if x_denom == 0 or y_denom == 0:
    print("Error: Division by zero is not allowed")
else:
    print(simplify(x, n))