import math


def simplify():
    numerator1 = int(input("Enter first fraction (e.g., 1/2): "))
    denominator1 = int(input("Enter the denominator: "))

    numerator2 = int(input(f"Enter second fraction (e.g., {3}/{4}): "))
    denominator2 = int(input("Enter the denominator: "))

    new_numerator = math.gcd(numerator1, numerator2)
    new_denominator = math.gcd(denominator1 * denominator2, new_numerator)

    return (
        f"{numerator1 // new_denominator}/{denominator1*denominator2//new_denominator}"
    )


print(simplify())