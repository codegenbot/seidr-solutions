def find_zero(xs: list):
    assert len(xs) % 2 == 0
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b