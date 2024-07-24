import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_nonzero_coeff = max(coeff for coeff in xs if abs(coeff) > 1e-9)
    zero_point = -xs[1] / (2 * largest_nonzero_coeff)
    return round(zero_point, 2)