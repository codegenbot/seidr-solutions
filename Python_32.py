def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        return "Error! Number of coefficients must be even."

    a0 = xs[0]
    an = xs[-1]

    if a0 == 0:
        return -an / (2 * xs[1])
    else:
        return (-an - xs[1]) / (2 * a0)