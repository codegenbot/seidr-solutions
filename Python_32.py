def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(abs(coeff) for coeff in xs)
    return -xs[1] / (2 * largest_coeff)