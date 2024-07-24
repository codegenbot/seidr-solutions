Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    leading_coeff = abs(max(xs))
    return round(-xs[1] / (2 * xs[0]), 2)