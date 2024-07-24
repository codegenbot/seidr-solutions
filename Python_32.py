import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(reversed(xs))])


def find_zero(xs: list):
    if len(xs) % 2 == 0:
        a = xs[0]
        b = sum(i * coeff for i, coeff in enumerate(reversed(xs[1:])))
        c = poly(xs[:-1], -b / (2 * a))
        return round(c, 2)
    else:
        raise ValueError("xs must have even number of coefficients")