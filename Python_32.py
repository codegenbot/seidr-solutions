import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have an even number of coefficients")
    largest_coeff_index = n // 2
    x = -xs[largest_coeff_index] / xs[0]
    return round(x, 2)