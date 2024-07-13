Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    coeff = xs[-1]
    return -coeff / xs[n//2]