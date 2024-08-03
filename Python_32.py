import math

def find_zero(xs: list):
    a, b, c = xs
    return round((-b + math.sqrt(b * b - 4 * a * c)) / (2 * a), 2)