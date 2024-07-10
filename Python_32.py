def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    if n == 2:
        return -b / a
    if n == 4:
        c = xs[2]
        d = xs[3]
        return (a * c - b) / (b - c)