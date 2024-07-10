def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], xs[1]
    D = b**2 - 4 * a
    x = (-b + math.sqrt(D)) / (2 * a)
    return x