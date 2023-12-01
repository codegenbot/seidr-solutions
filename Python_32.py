import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


n = int(input())
coefficients = [float(input()) for _ in range(n+1)]
value = float(input())

result = poly(coefficients, value)
zero = find_zero(coefficients)

print(result)
print(zero)