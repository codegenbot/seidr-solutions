Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff_index = xs.index(max(abs(x) for x in xs))
    return -xs[max_coeff_index]/(n//2*xs[max_coeff_index])**((n-1)//2)