def find_zero(xs: list):
    m, b = xs[0], xs[-1]
    if m == 0:
        raise ValueError("m must be non-zero")
    if b == 0:
        raise ValueError("b must be non-zero")
    return -b / m