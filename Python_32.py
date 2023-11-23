import math
import sys

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

num_coeffs = int(sys.stdin.readline().strip())
xs = list(map(float, sys.stdin.readline().strip().split()))
x = float(sys.stdin.readline().strip())

result = poly(xs, x)
print(result)

zero = find_zero(xs)
print(zero)