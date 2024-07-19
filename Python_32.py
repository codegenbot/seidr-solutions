def find_zero(xs: list):
    assert len(xs) % 2 == 0
    n = len(xs) - 1
    return -xs[n - 1] / xs[n]