import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    return -xs[0] / xs[1]


num_coeffs = int(input())
coeffs = []
for i in range(num_coeffs):
    coeffs.append(float(input()))

x = float(input())

result = poly(coeffs, x)
print(result)

zero = find_zero(coeffs)
print(zero)