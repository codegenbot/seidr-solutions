import math


def simplify():
    numerator1 = int(input(f"Enter first fraction (e.g., {1}/{2}): "))
    denominator1 = int(input("Enter the denominator: "))

    numerator2 = int(input(f"Enter second fraction (e.g., {3}/{4}): "))
    denominator2 = int(input("Enter the denominator: "))

    numerator = numerator1 * denominator2
    denominator = denominator1 * denominator2

    new_numerator = math.gcd(numerator, denominator)

    return f"{numerator // new_numerator}/{denominator // new_numerator}"


print(simplify())