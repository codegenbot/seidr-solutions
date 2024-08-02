def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    x = (a * d - b * c) / (b * b - a * c)
    return x