def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    assert xs[-2] != 0

    a = xs[-1]
    b = xs[-2]

    return -a / b