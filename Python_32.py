import math

def find_zero(a: float, b: float, c: float, d: float):
    return round((-b + math.sqrt(b * b - 3 * a * c)) / (3 * a), 2)