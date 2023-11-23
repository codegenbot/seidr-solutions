import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

try:
    n = int(input().strip())
    coeffs = list(map(float, input().strip().split()))[:n]
    x = float(input().strip())

    if len(coeffs) != n:
        raise ValueError("Invalid number of coefficients!")

    result = poly(coeffs, x)
    print(f"{result:.2f}")
except ValueError:
    print("Invalid input!")