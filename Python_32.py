import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

num_coeffs = int(input("Enter the number of coefficients: "))
xs = [float(input(f"Enter coefficient {i+1}: ")) for i in range(num_coeffs)]
x = float(input("Enter a value for x: "))

result = poly(xs, x)
print("Result:", result)

zero = find_zero(xs)
print("Zero:", zero)