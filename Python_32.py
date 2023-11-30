import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    if xs[1] == 0:
        raise ValueError("Cannot find zero when coefficient of x is zero.")
    return -xs[0] / xs[1]