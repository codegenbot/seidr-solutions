import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


n = int(input().strip())
coeffs = [float(input()) for _ in range(n)]

result = poly(coeffs, 0)
print(result)