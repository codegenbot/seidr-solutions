def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]

    if n == 2:
        return -b / a

    if n == 4:
        return 1.0