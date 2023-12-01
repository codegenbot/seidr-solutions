import math


def poly(xs: list, x: float):
    n = int(input())
    xs = list(map(float, input().split()))
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    n = int(input())
    xs = list(map(float, input().split()))
    return -xs[0] / xs[1]