import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    max_coeff_idx = xs.index(max(filter(None, xs)))
    return -xs[max_coeff_idx - 1] / xs[max_coeff_idx]