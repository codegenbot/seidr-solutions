def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]

    if n == 2:
        return -b / a
    elif n == 3:
        return 1.0