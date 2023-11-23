import math


def poly():
    xs = [float(x) for x in input().split()]
    x = float(input())
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero():
    xs = [float(x) for x in input().split()]
    return round((-1 * xs[0]) / xs[1], 2)


result = poly()
print(result)

zero = find_zero()
print(zero)