import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


xs = list(map(float, input("Enter the coefficients of the polynomial (separated by spaces): ").split()))

x = float(input("Enter the value of x: "))

result = poly(xs, x)
print("Result of polynomial evaluation:", result)

zero = find_zero(xs)
print("Zero of the polynomial:", zero)