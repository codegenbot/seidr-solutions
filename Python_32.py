def find_zero(xs: list):
    if len(xs) < 2:
        return None
    a, b = xs[-1], xs[-2]
    return 0 if a == 0 else -b / a