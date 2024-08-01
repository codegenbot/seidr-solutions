def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]

    if n == 2:
        return -b / (2 * a)
    else:
        return -b / (2 * c)