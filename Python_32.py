Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff_idx = n // 2
    return -xs[max_coeff_idx] / xs[n-1]