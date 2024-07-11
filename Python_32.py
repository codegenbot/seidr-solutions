Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    x = -xs[1] / xs[0]
    return round(x, 2)