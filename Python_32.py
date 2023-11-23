import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


xs = list(coeffs)

result = poly(xs, 0)
print(result)