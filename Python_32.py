import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    a = xs[0]
    b = xs[1]
    for i in range(2, n // 2 + 1):
        b -= (a / i) * xs[i]
        a *= -i
    return round(-b / a, 2)