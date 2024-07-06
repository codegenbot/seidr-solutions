import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else None
    d = xs[3] if n > 3 else None
    if c is not None and d is not None:
        x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    elif c is not None:
        x = -b / (2 * a)
    elif d is not None:
        x = (-d + math.sqrt(d**2 + 4 * b)) / (2 * b)
    else:
        x = -b / a
    return round(x, 2)