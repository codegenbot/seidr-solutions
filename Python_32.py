def find_zero(xs: list):
    if len(xs) == 2 and xs[0] == 0 and xs[1] != 0:
        return -xs[1] / xs[0]
    elif len(xs) >= 3:
        return (-xs[2] + math.sqrt((xs[1] ** 2) - (4 * xs[0] * xs[3]))) / (2 * xs[0])
    else:
        raise ValueError("Invalid input")