import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    max_coeff_idx = xs.index(max(filter(None, xs)))
    a = xs[max_coeff_idx]
    b = -xs[max_coeff_idx] / xs[1]
    x = (b + math.sqrt(b**2 - 4 * a)) / 2
    return round(x, 10)