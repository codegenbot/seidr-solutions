import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    x = -xs[1] / (2 * xs[0])
    return round(x, 2)