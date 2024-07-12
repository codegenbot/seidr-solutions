def find_zero(xs: list):
    n = len(xs) // 2  # largest non zero coefficient guarantees a solution
    return -xs[0] / xs[1]  # -a0/a1, for f(x) = a0 + a1*x

import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])