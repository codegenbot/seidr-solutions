def find_zero(xs: list):
    assert len(xs) % 2 == 0
    assert xs[-1] != 0
    return -xs[0] / xs[1]