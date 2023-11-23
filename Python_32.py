import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

try:
    n = int(input())
    coeffs = list(map(float, input().split()))
    x = float(input())

    if len(coeffs) != n+1:
        print("Invalid input!")
    else:
        result = poly(coeffs, x)
        print(f"{result:.2f}")
except ValueError:
    print("Invalid input!")