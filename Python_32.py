import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


# Read input from user
xs = list(map(float, input().split()))

# Call the functions with the input and print the result
print(poly(xs, xs[0]))
print(find_zero(xs))