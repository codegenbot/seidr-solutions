Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_nonzero_coeff = max(coeff for coeff in xs if coeff != 0)
    return -largest_nonzero_coeff / xs[-1]