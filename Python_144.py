from math import gcd

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

    gcd_val = math.gcd(denominator, denom)
    new_numerator = numerator * (denom // gcd_val)
    new_denominator = denominator * (num // gcd_val)

    while new_denominator != 1 and new_numerator % new_denominator != 0:
        gcd_val = math.gcd(new_numerator, new_denominator)
        new_numerator //= gcd_val
        new_denominator //= gcd_val

    return f"{new_numerator}/{new_denominator}"

print(simplify())