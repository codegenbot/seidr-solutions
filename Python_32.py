import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    degree = len(xs) - 1
    if degree % 2 != 0:
        raise ValueError("The number of coefficients must be even")
    max_coeff = max(xs)
    if max_coeff == 0:
        raise ValueError("The largest non-zero coefficient must be greater than 0")
    x = -max_coeff / xs[-2]
    return x