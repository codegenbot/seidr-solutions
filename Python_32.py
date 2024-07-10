def find_zero(xs: list):
    assert len(xs) % 2 == 0
    xs = xs[::-1]
    n = len(xs) - 1
    a, b = xs[0], xs[1]
    c = -a / b
    return c