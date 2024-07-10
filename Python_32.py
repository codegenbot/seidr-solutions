import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    x = -b / a
    return x