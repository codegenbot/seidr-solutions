import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    return xs[0] / -xs[1] if xs[1] != 0 else math.nan