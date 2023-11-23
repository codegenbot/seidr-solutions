import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    x = float(input("Enter x value: "))
    return -xs[0] / xs[1]


# Additional code to test the functions
xs = [1, 2, 3]
x = 2.5
result_poly = poly(xs, x)
result_find_zero = find_zero(xs)
print("result_poly:", result_poly)
print("result_find_zero:", result_find_zero)