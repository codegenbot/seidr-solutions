def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    assert xs[-1] != 0
    a, b = xs[-2], xs[-1]
    return -a / b