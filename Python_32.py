def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    return (b + math.sqrt(b * b - 3 * a * c)) / (3 * a)