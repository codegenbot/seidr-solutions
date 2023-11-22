def find_zero(xs: list):
    if xs[1] == 0:
        return None
    else:
        return -xs[0] / xs[1]