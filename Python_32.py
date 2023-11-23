import math
from scipy.optimize import root

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


coeffs = [float(input()) for _ in range(len(coeffs))]

result = poly(coeffs, 0)
print(result)


def find_zero():
    # Implement logic to find the root of the polynomial
    pass


def check(func):
    return func()


check(find_zero)