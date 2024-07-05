import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    from scipy.optimize import fsolve
    return fsolve(lambda x: poly(xs, x), 0)[0]