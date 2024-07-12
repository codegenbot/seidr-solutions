def find_zero(xs: list):
    degree = len(xs) - 1
    a = xs[0]
    b = xs[-1]
    if degree == 1:
        return -a / b
    else:
        return b / a