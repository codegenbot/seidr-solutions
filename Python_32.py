import math


def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    result = xs[0]
    for i in range(1, n):
        result = result * (n - i) + xs[i] * math.prod(range(i + 1))
    return round(result, 2)