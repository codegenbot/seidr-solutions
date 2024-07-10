def find_zero(xs):
    n = len(xs)
    for i in range(n // 2):
        a = xs[2 * i]
        b = xs[2 * i + 1]
        if b != 0:
            return -b / a