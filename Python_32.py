def find_zero(xs: list):
    if len(xs) < 2:
        raise ValueError("List should contain at least two elements.")
    for i in range(len(xs) - 1):
        if xs[i] == 0:
            return -xs[0] / xs[-1]
    return None