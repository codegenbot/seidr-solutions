def find_zero(xs: list):
    if len(xs) == 0:
        return None
    else:
        return -xs[0] / xs[-1]