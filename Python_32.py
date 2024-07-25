def find_zero(xs: list):
    assert len(xs) % 2 == 0
    assert max(xs, key=abs) != 0
    a, b = xs[0], xs[1]
    return -a / b