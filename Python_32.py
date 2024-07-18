def find_zero(xs: list):
    assert len(xs) >= 2
    x = -xs[0] / xs[-1]
    return x