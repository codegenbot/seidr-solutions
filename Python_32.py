import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

n = int(input())
xs = list(map(float, input().split()))

result1 = poly(xs, 1.5)
result2 = find_zero(xs)

print(result1)
print(result2)