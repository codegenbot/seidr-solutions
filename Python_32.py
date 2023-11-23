import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


n, coeffs, x = input().split(), list(map(float, input().split())), float(input())
result = poly(coeffs, x)
print(result)