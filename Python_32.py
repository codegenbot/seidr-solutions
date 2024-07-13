import math


def find_zero(coefficients: list):
    n = len(coefficients)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = coefficients[0]
    b = coefficients[1]
    c = coefficients[2] if n > 2 else 0
    d = coefficients[3] if n > 3 else 0
    x = (-b + math.sqrt(b**2 - 4 * a * (c - a * x))) / (2 * a)
    return round(x, 2)


while True:
    try:
        print(
            find_zero(
                [
                    int(x)
                    for x in input("Enter the coefficients (space separated): ").split()
                ]
            )
        )
    except ValueError as e:
        print(f"Error: {e}")
        exit()