def find_zero(xs: list):
    if len(xs) <= 1:
        return "Invalid input"
    a = xs[-1]
    b = xs[-2]
    return -b / a