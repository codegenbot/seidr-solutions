import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> float:
    return -xs[0] / xs[1]

n = int(input())
coefficients = list(map(float, input().split()))
x = float(input())

result_poly = poly(coefficients, x)
result_find_zero = find_zero(coefficients)

print(result_poly)
print(result_find_zero)