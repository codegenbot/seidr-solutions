import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs) // 2
    a, b = xs[0], max(xs[1:])
    x = -b / a
    return x