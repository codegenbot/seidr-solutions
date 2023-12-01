import math


def read_list():
    return list(map(float, input().split()))


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return round((-xs[0] / xs[1]), 2)


if __name__ == "__main__":
    xs = read_list()
    x = float(input())
    print(poly(xs, x))
    print(find_zero(xs))