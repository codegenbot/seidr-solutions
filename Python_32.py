def find_zero(xs: list):
    if len(xs) > 1:
        return -xs[1] / xs[-1]
    else:
        return None