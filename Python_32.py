import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    a = xs[n // 2]
    b = -xs[0] / (2 * a)
    c = xs[0] / (4 * a**2) - b
    d = b - c
    r1 = (-b + math.sqrt(d)) / 2
    r2 = (-b - math.sqrt(d)) / 2
    if abs(r1) < abs(r2):
        return round(r1, 10)
    else:
        return round(r2, 10)