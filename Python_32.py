def find_zero(xs: list):
    if len(xs) != 2:
        raise ValueError("xs must be a list of length 2")
    a, b = xs
    if a == 0:
        raise ZeroDivisionError("a cannot be zero")
    return -b / a