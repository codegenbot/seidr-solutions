import math


def poly(xs: list, x: float):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    a, b = xs[0], xs[1]
    return -a / b