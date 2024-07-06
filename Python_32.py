Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff_index = xs.index(max(xs))
    return -xs[largest_coeff_index] / xs[largest_coeff_index + 1]