Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    if not any(abs(x) == max_coeff for x in xs[1::2]):
        raise ValueError("largest non zero coefficient is required")
    return -xs[1] / (2 * xs[0])