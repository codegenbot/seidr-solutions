import math


def find_zero(a: int, b: int, c: int) -> float:
    return round((-b + math.sqrt(b * b - 3 * a * c)) / (3 * a), 2)