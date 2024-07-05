def find_zero(xs: list):
    if len(xs) < 2:
        return "Invalid input. List must have at least 2 elements."
    elif len(xs) != 3:
        return "Invalid input. List should only have 3 elements (ax^2 + bx + c)."
    else:
        a, b, c = xs
        return -b / (2 * a)