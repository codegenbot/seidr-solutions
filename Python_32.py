import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


coefficients = [float(x) for x in input("Enter the list of coefficients: ").split()]
value = float(input("Enter the value of x: "))

result = poly(coefficients, value)
zero = find_zero(coefficients)

print("Result:", result)
print("Zero:", zero)