import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


n = int(input())
coeffs = [float(input()) for _ in range(n)]
x = float(input())
result = poly(coeffs, x)
print(f"{result:.2f}")