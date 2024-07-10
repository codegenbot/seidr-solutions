def find_zero(xs: list):
    assert len(xs) % 2 == 0
    max_coeff = max(xs, key=abs)
    for x in range(-1000, 1000):
        if poly(xs, x) == 0:
            return x