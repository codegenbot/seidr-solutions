import math

def find_zero(xs: list):
    a, b, c, d = xs
    return round((- b + math.sqrt(b * b - 3 * a * c)) / (3 * a), 2)