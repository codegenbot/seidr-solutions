import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, x_exp) for x_exp, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[1] / xs[0]