def find_zero(xs: list):
    if len(xs) < 2:
        return None
    a = xs[-1]
    b = xs[-2]
    if b == 0:
        return None
    return -a / b