```
import math

def simplify(numerator1, denominator1, numerator2, denominator2):
    while True:
        x = input(f"Enter a fraction (e.g., {numerator1}/{denominator1}): ")
        if '/' in x:
            numerator, denominator = map(int, x.split('/'))
            if numerator < 0 or denominator <= 0:
                print('Invalid input. Please enter positive numerator and denominator.')
            else:
                break
        else:
            print('Invalid input. Please enter a fraction.')

    while True:
        n = input("Enter another fraction: ")
        if '/' in n:
            num, denom = map(int, n.split('/'))
            if num < 0 or denom <= 0:
                print('Invalid input. Please enter positive numerator and denominator.')
            else:
                break
        else:
            print('Invalid input. Please enter a fraction.')

    numerator = numerator // math.gcd(numerator, int(denominator1))
    denominator = denominator1 // math.gcd(numerator, int(denominator1))

    new_numerator = num // math.gcd(num, denom)
    new_denom = denom // math.gcd(num, denom)

    gcd = math.gcd(new_numerator, new_denom)
    new_numerator //= gcd
    new_denom //= gcd

    return f"{new_numerator}/{new_denom}"

print(simplify(1, 2, 3, 4))