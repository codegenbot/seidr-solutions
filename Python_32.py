def find_zero(xs: list):
    for a, b in zip(xs, xs[1:]):
        if a * b < 0:
            return -a / b