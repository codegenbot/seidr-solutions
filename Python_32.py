import math

def poly(coefficients: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(coefficients)])

xs = [float(input()) for _ in range(5)]

x = float(input())

result = poly(xs, x)
print(result)

zero = -xs[0] / xs[1]
print(zero)