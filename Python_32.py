import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    n = len(xs)
    a = xs[0]
    b = -xs[1]

    root = (-b + math.sqrt(b**2 - 4 * a * xs[n // 2])) / (2 * a)

    return round(root, 2)