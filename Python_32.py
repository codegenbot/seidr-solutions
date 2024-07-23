import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    max_coeff_idx = 0
    for i in range(1, n):
        if abs(xs[i]) > abs(xs[max_coeff_idx]):
            max_coeff_idx = i
    if xs[max_coeff_idx] < 0:
        return -xs[1] / xs[0]
    else:
        return -xs[1] / xs[0]