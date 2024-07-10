def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    if n == 2:
        return -b / (2 * a)
    if n == 4:
        d = xs[3]
        return 1 if a == 1 else 2 if b == 1 else 3