Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    highest_coefficient_index = n // 2
    return -xs[highest_coefficient_index] / xs[0]