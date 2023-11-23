import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


coeffs = []
xs = coeffs
coeffs = [float(input()) for _ in range(len(xs))]

result = poly(coeffs, 0)
print(result)


def find_zero():
    pass


def check(func):
    # Implement your logic here
    return func()


check(find_zero)