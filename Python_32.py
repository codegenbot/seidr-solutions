import math


def poly(xs: list, x: float):
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return xs[0] / -xs[1]


def main():
    xs = list(map(float, input().split()))
    result = find_zero(xs)
    print(result)


if __name__ == "__main__":
    main()