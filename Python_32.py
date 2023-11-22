import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i+1])
    return zeros


# Read input from user
n = int(input())
coefficients = []
for i in range(n + 1):
    coefficient = float(input())
    coefficients.append(coefficient)

# Call the functions
x_value = float(input())
result = poly(coefficients, x_value)
print(result)

zeros = find_zero(coefficients)
for zero in zeros:
    print(zero)