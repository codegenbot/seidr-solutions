import math


def simplify(numerator1, denominator1, numerator2, denominator2):
    while True:
        x = input(f"Enter a fraction (e.g., {numerator1}/{denominator1}): ")
        if "/" in x:
            numerator, denominator = map(int, x.split("/"))
            break
        else:
            print("Invalid input. Please enter a fraction.")

    while True:
        n = input("Enter another fraction: ")
        if "/" in n:
            num, denom = map(int, n.split("/"))
            break
        else:
            print("Invalid input. Please enter a fraction.")

    numerator = (
        numerator
        * denominator1
        // math.gcd(numerator * denominator1, numerator2 * denominator2)
    )
    denominator = (
        denominator1
        * denominator2
        // math.gcd(numerator * denominator1, numerator2 * denominator2)
    )

    return f"{numerator}/{denominator}"


print(simplify(1, 2, 3, 4))