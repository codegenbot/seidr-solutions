from typing import List


def poly(xs: List[float], x: float) -> float:
    return sum([coeff * x ** i for i, coeff in enumerate(xs)])


def find_zero(xs: List[float]) -> float:
    a, b, c = xs
    discriminant = b ** 2 - 4 * a * c
    if discriminant >= 0:
        root1 = (-b + (discriminant) ** 0.5) / (2 * a)
        root2 = (-b - (discriminant) ** 0.5) / (2 * a)
        return root1 if root1 >= 0 else root2
    else:
        return float('inf')