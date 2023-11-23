import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

num_coeffs = int(input("Enter the number of coefficients: "))
xs = list(map(float, input("Enter the coefficients: ").split()))
x = float(input("Enter the value of x: "))

result = poly(xs, x)
print(result)

zero = find_zero(xs)
print(zero)