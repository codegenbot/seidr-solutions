import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

num_coeffs = int(input().strip())
xs = []
for _ in range(num_coeffs):
    xs.append(float(input().strip()))

x = float(input().strip())

result = poly(xs, x)
print(result)

zero = find_zero(xs)
print(zero)