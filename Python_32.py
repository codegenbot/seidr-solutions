def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    if n == 2:
        return -b / a
    c = xs[2]
    d = xs[3]
    return (c + math.sqrt(c**2 - 4 * b * d)) / (2 * d)