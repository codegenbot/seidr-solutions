import math


def poly(xs: list, x: float):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    if 0 not in xs:
        return None
    return round(xs.index(0) * -1 / (xs.index(0) - 1), 2)