def find_zero(xs: list):
    x = 0
    while poly(xs, x) != 0:
        x += 0.01
    return x