def find_zero(xs: list):
    if len(xs) % 2 != 0 or xs[0] != 0:
        return None
    return xs.index(0)