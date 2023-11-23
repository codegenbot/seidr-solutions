import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

n = int(input())
coeffs = list(map(float, input().strip().split()))
x = float(input())

if n == 0:
    result = 0.0
else:
    result = poly(coeffs, x)

print(f"{result:.2f}")