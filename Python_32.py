def find_zero(xs: list):
    assert len(xs) % 2 == 0
    assert max(xs) != 0
    p = xs[1:]  # remove leading zero coefficient
    return -p[0] / p[1]