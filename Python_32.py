def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    if n == 2:
        return -b / (2 * a)
    elif n == 4:
        return 1.0 if a == 0 else -b / (3 * a)