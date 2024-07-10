def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None

    x = -xs[1] / xs[0]

    return round(x, 2)