import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list) -> float:
    return -xs[0] / xs[1]


if __name__ == "__main__":
    xs = list(map(float, input().split()))
    x = float(input())

    polynomial_result = poly(xs, x)
    print(round(polynomial_result, 2))

    if xs[1] != 0:
        zero_result = find_zero(xs)
        print(round(zero_result, 2))