import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

xs = list(map(float, input().split()))
x = float(input())

polynomial_value = poly(xs, x)
zero_value = find_zero(xs)

print(polynomial_value)
print(zero_value)