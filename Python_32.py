def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]

    if n == 2:
        return -b / (2 * a)
    elif n == 3:
        return -b / (3 * a) if c == 0 else -c / (2 * b)
    else:
        return 1 if b == 0 else -b / a