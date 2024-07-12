import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    largest_coeff_index = max(range(n), key=lambda i: abs(xs[i]))
    x = -xs[largest_coeff_index] / (2 * xs[largest_coeff_index])
    return round(x, 2)