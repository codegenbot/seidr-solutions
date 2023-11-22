import math


def poly(xs: list[int], x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list[int]) -> float:
    return -xs[0] / xs[1]


if __name__ == "__main__":
    xs = list(map(int, input().split()))
    print(poly(xs, 0))
    print(find_zero(xs))