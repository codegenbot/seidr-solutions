import math
def poly(xs: list, x: float):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])
def find_zero(xs: list):
    return xs[0] / -xs[1]
# Getting input from the user
xs = input().split()
xs = [float(coeff) for coeff in xs]
x = float(input())

# Calling the functions
result_poly = poly(xs, x)
result_zero = find_zero(xs)

# Printing the outputs
print(result_poly)
print(result_zero)