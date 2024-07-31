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

    gcd = math.gcd(denominator, denom)
    new_numerator = numerator * (denom // gcd)
    new_denominator = denominator * (num // gcd)
    return f"{new_numerator}/{new_denominator}"

print(simplify())