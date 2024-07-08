def find_zero(xs: list):
    if not xs or 0 not in xs:
        return None
    return xs.index(0)