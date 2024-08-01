def find_zero(xs: list):
    assert len(xs) > 1
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a