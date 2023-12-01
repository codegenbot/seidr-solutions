import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    if xs[1] != 0:
        return xs[0] / -xs[1]
    else:
        return math.nan