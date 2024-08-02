Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    largest_coeff_idx = xs.index(max(xs))
    return -xs[largest_coeff_idx]/(2*sum([i * xs[i] for i in range(n)]))