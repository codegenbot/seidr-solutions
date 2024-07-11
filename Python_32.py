Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    max_coeff = max(abs(x) for x in xs)
    if xs[0] != max_coeff:
        raise ValueError("largest non zero coefficient should be at the start")
    return -xs[1] / (2 * xs[0])