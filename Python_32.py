def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0, "Number of coefficients should be even"
    x = -1
    while True:
        if poly(xs, x) == 0:
            return x
        x += 1