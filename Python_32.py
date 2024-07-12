def find_zero(xs: list):
    x = -1
    while True:
        if poly(xs, x) == 0:
            return x
        x += 0.01