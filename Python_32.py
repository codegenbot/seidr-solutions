import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    a = xs[n // 2]
    b = -xs[0] / (2 * a)
    c = xs[0] / (4 * a) - b**2
    return round(-b + math.sqrt(c), 2)