def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = max([abs(coeff) for coeff in xs])
    b = -a
    return -b / a