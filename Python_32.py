import math


def find_zero():
    coefficients = input("Enter the coefficients of the polynomial (space-separated): ")
    coefficients = list(map(float, coefficients.split()))

    try:
        return round(
            (
                -coefficients[1]
                + math.sqrt(
                    coefficients[1] ** 2 - 4 * coefficients[0] * coefficients[-1]
                )
            )
            / (2 * coefficients[0]),
            2,
        )
    except ZeroDivisionError:
        return "This polynomial does not have a zero."