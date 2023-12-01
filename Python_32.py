from typing import List


def poly(xs: List[float], x: float) -> float:
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: List[float]) -> float:
    return -xs[0] / xs[1]