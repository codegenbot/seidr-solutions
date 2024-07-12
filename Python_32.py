Here is the completed code:

def find_zero(xs: list):
    assert len(xs) % 2 == 0, "xs must have an even number of coefficients"
    largest_coeff = abs(max(xs))
    return -xs[1] / xs[0]