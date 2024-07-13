Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    largest_nonzero_coeff = max(coeff for coeff in xs if abs(coeff) > 1e-9)
    return -largest_nonzero_coeff / xs[-1]