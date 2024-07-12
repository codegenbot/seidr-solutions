def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    x = -xs[-2] / xs[-1]
    return x