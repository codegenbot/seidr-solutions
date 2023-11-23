import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

coeffs = []

print("Enter the number of coefficients:")
n = int(input())

for _ in range(n):
    coeffs.append(float(input()))

x = float(input())

if len(coeffs) == 0:
    result = 0.0
else:
    result = poly(coeffs, x)

print(f"Result: {result:.2f}")