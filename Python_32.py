def find_zero(xs: list):
    x = -1
    while poly(xs, x) != 0:
        x += 0.1
    return x