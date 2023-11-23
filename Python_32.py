import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return round(next(x for x in range(-100, 101) if poly(xs, x) == 0), 2)