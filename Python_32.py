import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs) - 1
    a, b = -max([abs(c) for c in xs]), max([abs(c) for c in xs])
    delta = 0.0001
    while b - a > delta:
        c = (a + b) / 2
        if poly(xs, a) * poly(xs, c) < 0:
            b = c
        else:
            a = c
    return a