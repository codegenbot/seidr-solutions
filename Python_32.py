import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i + 1])
    return zeros


# Proper input format:
"""
input_lines = input().split('\n')
xs = list(map(float, input_lines[0].split()))
x = float(input_lines[1])
"""

input_lines = input().split("\n")
xs = list(map(float, input_lines[0].split()))
x = float(input_lines[1])

print(find_zero(xs))
print(poly(xs, x))