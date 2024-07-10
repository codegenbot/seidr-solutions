def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    a = xs[n // 2]
    return -a / xs[0]