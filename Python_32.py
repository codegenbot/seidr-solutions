def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if len(xs) < 3:
        raise ValueError("xs must have at least three coefficients")
    zero = xs[1] ** 2 - 4 * xs[0] * xs[-1]
    if zero < 0:
        return (-xs[1] + math.sqrt(zero)) / (2 * xs[0])
    elif zero > 0:
        return (-xs[1] - math.sqrt(zero)) / (2 * xs[0])
    else:
        return -xs[1] / xs[0]