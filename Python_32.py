import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


coeffs = []
xs = coeffs
coeffs = [float(input()) for _ in range(len(xs))]

x = 0
result = poly(xs, x)
result