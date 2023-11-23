import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

coeff_str = input()
coeffs = list(map(float, coeff_str.split()))

x = float(input())

if len(coeffs) == 0:
    result = 0.0
else:
    result = poly(coeffs, x)

print(f"{result:.2f}")