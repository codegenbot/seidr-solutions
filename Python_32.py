import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, x) for x, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[1] / xs[0]