Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    largest_coeff = max([abs(x) for x in xs])
    return -xs[1] / (2 * largest_coeff)