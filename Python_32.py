import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

n = int(input("Enter the degree of the polynomial: "))
coeffs = list(map(float, input("Enter the coefficients of the polynomial: ").strip().split()))
x = float(input("Enter the value of x: "))

if n == 0:
    result = 0.0
else:
    result = poly(coeffs, x)

print(f"{result:.2f}")