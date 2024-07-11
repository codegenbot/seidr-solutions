Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    return -xs[1] / xs[0]