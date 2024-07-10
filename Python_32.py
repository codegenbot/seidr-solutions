Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff_index = xs.index(max(i for i in xs if i != 0))
    return -xs[max_coeff_index] / xs[1]