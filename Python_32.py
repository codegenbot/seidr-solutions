import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return None

    for i in range(n):
        p = lambda x: poly(xs, x)
        if math.isclose(p(i), 0):
            return i