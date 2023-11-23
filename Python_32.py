import math


def poly(xs, x):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs):
    return round(-xs.index(0) / (xs.index(0) - 1), 2)


coefficients = [float(x) for x in input().split()]
x_value = float(input())

result = poly(coefficients, x_value)
zero = find_zero(coefficients)

print(result)
print(zero)