def find_zero(xs: list):
    if len(xs) < 2:
        return "Invalid input"
    elif len(xs) == 2:
        if xs[0] == 0:
            return "Indeterminate"
        else:
            return -xs[1] / xs[0]
    else:
        if xs[0] == 0:
            return "Indeterminate"
        else:
            return (-xs[2] + math.sqrt((xs[1] ** 2) - (4 * xs[0] * xs[3]))) / (
                2 * xs[0]
            )