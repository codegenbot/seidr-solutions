import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i+1])
    return zeros


# Read input from user
n = int(input("Enter the degree of the polynomial: "))
coefficients = []
for i in range(n + 1):
    coefficient = float(input(f"Enter the coefficient of x^{i}: "))
    coefficients.append(coefficient)

# Call the functions
x_value = float(input("Enter the value of x: "))
result = poly(coefficients, x_value)
print(f"The evaluated polynomial at x = {x_value} is {result}")

zeros = find_zero(coefficients)
print("The zeros of the polynomial are:")
for zero in zeros:
    print(zero)