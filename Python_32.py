def find_zero(xs: list):
    assert len(xs) % 2 == 0
    assert any(xs)

    a, b = xs[0], max(xs[1:])

    if a == 0:
        return 0
    else:
        return -b / a