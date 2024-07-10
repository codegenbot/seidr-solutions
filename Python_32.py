def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    d = b**2 - 4 * a * xs[2]
    x = (-b + math.sqrt(d)) / (2 * a)
    return x