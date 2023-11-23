import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero():
    xs = list(map(float, input().split()))
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i + 1])
    return zeros


task_type = input()

if task_type == "poly":
    xs = list(map(float, input().split()))
    x = float(input())
    result = poly(xs, x)
elif task_type == "find_zero":
    result = find_zero()

print(result)