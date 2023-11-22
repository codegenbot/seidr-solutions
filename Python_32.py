import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    zero_xs = []
    for x in xs:
        if x == 0:
            zero_xs.append(x)
    if zero_xs:
        return zero_xs[0]
    else:
        return None