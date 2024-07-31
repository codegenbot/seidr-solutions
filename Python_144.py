```
import math

def simplify():
    while True:
        x = input("Enter a fraction (e.g., 1/2): ")
        if '/' in x:
            numerator, denominator = map(int, x.split('/'))
            break
        else:
            print('Invalid input. Please enter a fraction.')

    while True:
        n = input("Enter another fraction: ")
        if '/' in n:
            num, denom = map(int, n.split('/'))
            break
        else:
            print('Invalid input. Please enter a fraction.')

    numerator = numerator // math.gcd(numerator, int(denominator))
    denominator = denominator // math.gcd(numerator, int(denominator))

    new_numerator = num // math.gcd(num, denom)
    new_denom = denom // math.gcd(num, denom)

    gcd = math.gcd(new_numerator, new_denom)
    new_numerator //= gcd
    new_denom //= gcd

    return f"{new_numerator}/{new_denom}"

print(simplify())