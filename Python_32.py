Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    
    largest_coeff_idx = xs.index(max(xs))
    x = -xs[largest_coeff_idx-1] / xs[largest_coeff_idx]
    return round(x, 2)