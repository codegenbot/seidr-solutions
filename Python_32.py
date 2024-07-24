def find_zero(xs: list):
    m = max(xs, key=abs)
    return -m / xs[-2]