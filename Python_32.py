import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    assert len(xs) % 2 == 0
    max_coeff = max(xs, key=abs)
    x = -max_coeff
    return x