def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a0 = xs[0]
    an = xs[-1]
    x = -a0 / an
    return x