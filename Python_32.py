import math


def poly(xs: list, x: float):
    return sum([coeff * x**i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return xs[0] / -xs[1]


# Getting input from the user
xs = input("Enter the list of coefficients: ").split()
xs = [float(coeff) for coeff in xs]
x = float(input("Enter the value of x: "))

# Calling the functions
result_poly = poly(xs, x)
result_zero = find_zero(xs)

# Printing the outputs
print("The result of poly function is:", result_poly)
print("The result of find_zero function is:", result_zero)