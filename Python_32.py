import math


def poly():
    xs = input().split()
    xs = [float(coeff) for coeff in xs]
    x = float(input())
    return sum([coeff * x**i for i, coeff in enumerate(xs)])


def find_zero():
    xs = input().split()
    xs = [float(coeff) for coeff in xs]
    return xs[0] / -xs[1]


if __name__ == "__main__":
    print(poly())
    print(find_zero())