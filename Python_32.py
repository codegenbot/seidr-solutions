import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i+1])
    return zeros