def find_zero(xs: list):
    if len(xs) == 2:
        return -xs[1] / xs[0]
    else:
        return -(-xs[-1] / xs[-2])