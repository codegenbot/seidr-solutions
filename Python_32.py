def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], max(xs[1:])
    if n % 2 == 1 or a == 0:
        return None
    return -b / a