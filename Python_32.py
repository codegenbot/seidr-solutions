import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return next(x for x in range(-1000, 1000) if poly(xs, x) == 0)