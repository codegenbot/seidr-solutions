def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None

    degree = len(xs) - 1
    idx = xs.index(max(xs))
    f_x = xs[idx]

    if degree % 2 == 0:
        return -1 if f_x > 0 else 1
    else:
        return 1 if f_x > 0 else -1