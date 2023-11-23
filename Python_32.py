import math


def poly(coeffs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(coeffs)])


n = int(input())
coeffs = [float(input()) for _ in range(n)]
x = float(input())
result = poly(coeffs, x)
print(f"{result:.2f}")