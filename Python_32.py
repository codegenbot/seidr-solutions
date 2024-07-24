```
def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = max(abs(coeff) for coeff in xs)
    return -xs[1] / (2 * max_coeff)