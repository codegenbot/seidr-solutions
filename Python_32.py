import math

def find_zero(xs: list):
    if len(xs) < 4:
        return "Input list must have at least 4 elements"

    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    return round((-b + math.sqrt(b * b - 4 * a * c)) / (2 * a), 2)