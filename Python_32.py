```
def find_zero(xs):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(abs(x) for x in xs)
    return -xs[0] / (2 * largest_coeff)