def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff_index = xs.index(max([abs(x) for x in xs]))
    return -xs[max_coeff_index] / xs[max_coeff_index + 1]