def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    assert abs(xs[-1]) > 0
    return -xs[0] / xs[-1]