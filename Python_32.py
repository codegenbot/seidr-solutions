import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return round(find_zero([1, 2]), 2)
    return round(find_zero([-6, 11, -6, 1]), 2)