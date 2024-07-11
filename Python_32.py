```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = abs(max(xs))
    return -xs[1] / (2 * xs[0])