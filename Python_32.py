import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    if len(xs) < 2 or xs[0] == 0:
        return None

    x = 0.0
    while True:
        if math.isclose(poly(xs, x), 0.0):
            return x
        x += 1.0