import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> list:
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i + 1])
    return zeros


xs = list(map(float, input().split()))

if len(xs) == 1:
    result = xs[0]
elif len(xs) == 2:
    result = -xs[0] / xs[1]
else:
    task_type = input()
    if task_type == "poly":
        x = float(input())
        result = poly(xs, x)
    elif task_type == "find_zero":
        result = find_zero(xs)

print(result)