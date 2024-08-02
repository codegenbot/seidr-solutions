import math


def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 1 else 0
    d = xs[3] if n > 2 else 0

    if n == 2:
        return -b / (2 * a)

    D = c**2 - 4 * b * a
    x1 = (-c + math.sqrt(D)) / (2 * b)
    x2 = (-c - math.sqrt(D)) / (2 * b)

    return x1 if abs(poly(xs, x1)) < abs(poly(xs, x2)) else x2