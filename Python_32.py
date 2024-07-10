def find_zero(xs: list):
    n = len(xs)
    return sum(xs[:-1]) - sum(xs)