def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    assert xs[n - 1] != 0
    return -xs[0] / xs[1]