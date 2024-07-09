import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_abs_coeff = max(abs(c) for c in xs)
    return round(-xs[1] / (2 * max_abs_coeff), 10)