import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


xs = list(map(float, input().strip().split()))

x = float(input())

result = poly(xs, x)
print(result)

zero = find_zero(xs)
print(zero)