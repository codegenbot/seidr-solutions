import math

def poly(xs: list[float], x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

coeff_str = "2 3 4"  # Replace with the actual input coefficients
coeffs = [] if not coeff_str.strip() else list(map(float, coeff_str.split()))

x = 2.5  # Replace with the actual value of x

result = poly(coeffs, x)
print(f"{result:.2f}")