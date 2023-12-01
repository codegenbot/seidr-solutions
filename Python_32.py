import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


# Read input from user
n = int(input())
coefficients = [float(input()) for _ in range(n+1)]
value = float(input())

# Call the functions with user input
result = poly(coefficients, value)
zero = find_zero(coefficients)

# Print the results
print(result)
print(zero)