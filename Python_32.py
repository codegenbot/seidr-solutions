import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    degree = len(xs) - 1
    a, b = xs[0], max(abs(coeff) for coeff in xs)
    if degree % 2 == 1 or a == 0:
        return None
    return -b / a if degree % 4 == 2 else b / a