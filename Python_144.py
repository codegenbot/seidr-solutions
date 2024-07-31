import math

def simplify(numerator1, denominator1, numerator2, denominator2):
    while True:
        x = input(f"Enter a fraction (e.g., {numerator1}/{denominator1}): ")
        if '/' in x:
            numerator3, denominator3 = map(int, x.split('/'))
            break
        else:
            print('Invalid input. Please enter a fraction.')

    while True:
        n = input("Enter another fraction: ")
        if '/' in n:
            num4, denom4 = map(int, n.split('/'))
            break
        else:
            print('Invalid input. Please enter a fraction.')

    numerator1 *= denominator2
    numerator2 *= denominator3
    denominator1 *= denominator3
    denominator2 *= denominator3

    common_divisor = math.gcd(numerator1, denominator1)
    simplified_numerator = numerator1 // common_divisor
    simplified_denominator = denominator1 // common_divisor

    return f"{simplified_numerator}/{simplified_denominator}"

print(simplify(1, 2, 3, 4))