def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    xs = [-x for x in xs]
    return round(next(x for x in range(-1000, 1000) if poly(xs, x) == 0), 2)