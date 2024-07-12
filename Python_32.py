import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs) - 1
    for i in range(n):
        if xs[i] != 0:
            a = xs[i]
            xs[i] = 0
            break
    b = xs[n]
    return -b / a


# Test cases
print(round(find_zero([1, 2]), 2))  # -0.5
print(round(find_zero([-6, 11, -6, 1]), 2))  # 1.0