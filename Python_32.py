def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    if xs[1] == 0 and xs[0] == 0:
        return 0
    max_coeff = abs(max(xs))
    return -max_coeff / (2 * xs[0])