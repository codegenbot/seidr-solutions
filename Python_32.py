import math
from typing import List, Tuple


def poly(xs: List[float], x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: List[float]) -> float:
    return -xs[0] / xs[1]


def read_input() -> Tuple[List[float], float]:
    xs = list(map(float, input().split()))
    x = float(input())
    return xs, x


def main():
    xs, x = read_input()
    result = poly(xs, x)
    print(result)


if __name__ == "__main__":
    main()