import math


def find_zero():
    coefficients = input(
        "Enter the coefficients of the polynomial (space-separated): "
    ).split()
    coefficients = [float(i) for i in coefficients]

    n = len(coefficients)
    if n % 2 != 0:
        raise ValueError("The number of coefficients must be even")

    a = coefficients[n // 2]
    b = -sum([coeff for i, coeff in enumerate(coefficients[: n // 2]) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(coefficients[: n // 2]) if i % 2 == 0])

    d = -a
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


print(find_zero())