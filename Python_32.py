def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    assert xs[-1] != 0
    for i in range(n - 1):
        if xs[i] == 0:
            return i
    return -xs[0] / xs[1]