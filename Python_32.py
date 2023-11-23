import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return round(xs.index(0) * -1 / (xs.index(0) - 1), 2)