import math


def find_zero(xs: list):
    a, b, c = xs[0], xs[1], xs[2]
    d = (b**2) - (4 * a * c)
    if d > 0:
        x1 = (-b + math.sqrt(d)) / (2 * a)
        x2 = (-b - math.sqrt(d)) / (2 * a)
        return min(x1, x2), max(x1, x2)
    elif d == 0:
        x = -b / (2 * a)
        return x, x
    else:
        return None