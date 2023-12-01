import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return round(-xs[0] / xs[1], 2)

coefficients = input("Enter coefficients separated by spaces: ")
x_value = float(input("Enter the value of x: "))

coefficients = list(map(float, coefficients.split()))

result1 = poly(coefficients, x_value)
result2 = find_zero(coefficients)

print("Result 1:", result1)
print("Result 2:", result2)