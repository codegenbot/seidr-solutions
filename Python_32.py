Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    leading_coeff = max(coeff for coeff in xs if coeff)
    return -leading_coeff / xs[1]