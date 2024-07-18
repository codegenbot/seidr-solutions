def find_zero(xs: list):
    assert len(xs) % 2 == 0
    assert xs[-2] != 0
    a, b = xs[-1], xs[-2]
    return -a / b