Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "Input must have an even number of coefficients"
    x = -xs[1] / xs[3]
    return round(x, 2)