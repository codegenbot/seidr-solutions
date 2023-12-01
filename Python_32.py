import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return round(-xs[0] / xs[1], 2)

xs = list(map(int, input().split()))
result = find_zero(xs)
print(result)