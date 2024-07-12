Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    max_coeff = max(abs(x) for x in xs)
    assert max_coeff != 0, "largest non zero coefficient is required"
    x = -xs[1] / (2 * xs[0])
    return round(x, 2)