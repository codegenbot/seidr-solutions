Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    largest_nonzero_coefficient_index = n // 2
    return -xs[largest_nonzero_coefficient_index] / xs[n-1]