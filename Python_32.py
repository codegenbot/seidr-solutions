import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a0 = xs[0]
    an = xs[-1]
    if math.fabs(an) < math.fabs(a0):
        raise ValueError("largest non zero coefficient should be the leading one")
    x = -a0 / an
    return round(x, 2)