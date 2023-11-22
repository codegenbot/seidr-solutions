import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    if xs[1] != 0:
        return -xs[0] / xs[1]
    else:
        return None