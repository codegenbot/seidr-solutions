import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return round((-1 * xs[0]) / xs[1], 2)


# Read input from user
coefficients = list(map(int, input().split()))
x_value = float(input())

# Call the functions with user input
result = poly(coefficients, x_value)
zero = find_zero(coefficients)

# Print the results
print(result)
print(zero)