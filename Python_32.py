def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    return round((-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a), 2)