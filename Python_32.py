Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    max_coeff = abs(max(xs))
    return -xs[1] / xs[0]