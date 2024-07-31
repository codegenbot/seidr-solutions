import math

def simplify():
    numerator1 = int(input("Enter first fraction numerator: "))
    denominator1 = int(input(f"Enter first fraction denominator: "))

    numerator2 = int(input(f"Enter second fraction numerator: "))
    denominator2 = int(input(f"Enter second fraction denominator: "))

    new_numerator = (numerator1 * denominator2)
    new_denominator = math.gcd(denominator1, denominator2)

    simplified_numerator = new_numerator // new_denominator
    simplified_denominator = new_denominator

    return f"{simplified_numerator}/{simplified_denominator}"

print(simplify())