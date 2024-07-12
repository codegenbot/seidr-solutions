def find_zero(xs: list):
    a = xs[-1]
    b = xs[-2]
    if a == 0:
        return "Not a valid quadratic equation"
    x = -b / a
    return x