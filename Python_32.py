import math


def poly():
    xs = input().strip().split()
    xs = [int(coeff) for coeff in xs]
    x = float(input())
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero():
    xs = input().strip().split()
    xs = [int(coeff) for coeff in xs]
    return xs[0] / -xs[1]