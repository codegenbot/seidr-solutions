import math

def simplify():
    while True:
        x = input("Enter a fraction (e.g., 1/2): ")
        if '/' in x:
            numerator, denominator = map(int, x.split('/'))
            break
        else:
            print('Invalid input. Please enter a fraction.')

    numerator1 = numerator
    denominator1 = denominator

    while True:
        n = input("Enter another fraction: ")
        if '/' in n:
            num, denom = map(int, n.split('/'))
            break
        else:
            print('Invalid input. Please enter a fraction.')

    gcd = math.gcd(denominator1, denom)
    return f"{numerator//gcd}/{denominator1//gcd} / {num//gcd}/{denom//gcd}"

print(simplify())