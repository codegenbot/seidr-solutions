import math


def poly(xs: list, x: float):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return xs[0] / -xs[1]


if __name__ == "__main__":
    n = int(input())
    xs = []
    for i in range(n):
        xs.append(float(input()))

    x_val = float(input())
    output1 = poly(xs, x_val)
    output2 = find_zero(xs)

    print(output1)
    print(output2)