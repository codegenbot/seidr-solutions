import math


def f(n):
    return [i if i % 2 else math.factorial(i) for i in range(1, n + 1)]