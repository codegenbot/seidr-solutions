import math
import sys

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

try:
    n = int(sys.stdin.readline().strip())
    coeffs = list(map(float, sys.stdin.readline().strip().split()))
    x = float(sys.stdin.readline().strip())

    if n == 0:
        result = 0.0
    else:
        result = poly(coeffs, x)

    print(f"{result:.2f}")
except ValueError:
    print("Invalid input!")