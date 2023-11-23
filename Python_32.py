import math


def poly(xs, x):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs):
    return round(-xs.index(0) / (xs.index(0) - 1), 2)


# Read input from the user
coefficients = [float(x) for x in input().split()]
x_value = float(input())

# Call the functions
result = poly(coefficients, x_value)
zero = find_zero(coefficients)

# Print the results
print(result)
print(zero)