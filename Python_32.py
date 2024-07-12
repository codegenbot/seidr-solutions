import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs) - 1
    b = xs[n]
    a = xs[0]
    return -b / a if n == 1 else 1