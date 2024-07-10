def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    assert xs[n] != 0
    return -xs[0] / xs[n]