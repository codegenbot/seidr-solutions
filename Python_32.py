import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


def main():
    xs = list(map(float, input().split()))
    x = float(input())

    result_1 = poly(xs, x)
    print(result_1)

    result_2 = find_zero(xs)
    print(result_2)


if __name__ == "__main__":
    main()