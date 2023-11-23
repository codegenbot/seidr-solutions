import numpy as np


def poly(xs: list, x: float) -> float:
    return np.polyval(xs, x)


def solve_equation(xs: list) -> float:
    equation = np.poly1d(xs)
    zero = np.roots(equation)
    return zero[0]
    

num_coeffs = int(input())
coeffs = []
for i in range(num_coeffs):
    coeffs.append(float(input()))

x = float(input())

result = poly(coeffs, x)
print(result)

zero = solve_equation(coeffs)
print(zero)