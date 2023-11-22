import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


# Read the input
xs = [float(x) for x in input().split()]

# Call the functions
result = poly(xs, 2.5)
zero = find_zero(xs)

# Print the results
print(result)
print(zero)