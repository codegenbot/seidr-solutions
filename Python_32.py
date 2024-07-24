Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    max_coeff = max(abs(x) for x in xs)
    if max_coeff != xs[0]:
        return -xs[0] / xs[1]
    else:
        return 0