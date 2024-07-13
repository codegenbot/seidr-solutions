import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b


# Test cases
# print(round(find_zero([1, 2]), 2)) # -0.5
# print(round(find_zero([-6, 11, -6, 1]), 2)) # 1.0