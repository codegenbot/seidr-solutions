Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(abs(x) for x in xs)
    return round(-(xs[1] / (2 * largest_coeff)), 2)