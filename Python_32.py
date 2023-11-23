import math

n = int(input())
coeffs = [float(input()) for _ in range(n)]
x = float(input())

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

result = poly(coeffs, x)
print(f"{result:.2f}")