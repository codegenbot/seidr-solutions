def find_zero(xs):
    n = len(xs)
    a = xs[n // 2]
    return -a / xs[0] if a != 0 else 0