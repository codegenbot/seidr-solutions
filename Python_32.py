def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0, "The number of coefficients must be even."
    assert xs[n] != 0, "The largest coefficient must be non-zero."
    return -xs[0] / xs[1]