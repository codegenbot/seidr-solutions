import math


def poly(xs: list, x: float) -> float:
    xs = [float(input("Enter coefficient: ")) for _ in range(len(xs))]
    x = float(input("Enter x: "))
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero() -> float:
    xs = [float(input("Enter coefficient: ")) for _ in range(2)]
    return -xs[0] / xs[1]