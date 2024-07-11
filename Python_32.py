Here is the completed code:

def find_zero(xs: list):
    assert len(xs) % 2 == 0, "xs must have even number of coefficients"
    max_coeff = max(abs(x) for x in xs)
    return -xs[1] / (2 * xs[0]) if max_coeff == abs(xs[0]) else 1