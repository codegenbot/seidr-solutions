def find_zero(xs: list):
    for x in range(-1000, 1001):
        if poly(xs, x) == 0:
            return x