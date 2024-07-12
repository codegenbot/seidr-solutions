def find_zero(xs: list):
    if not xs:
        return "Input list is empty"
    if xs[-1] == 0:
        return len(xs) - 1
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a