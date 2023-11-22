import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * (x**i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float or None:
    zero_xs = [x for x in xs if math.isclose(x, 0)]
    return zero_xs[0] if zero_xs else None