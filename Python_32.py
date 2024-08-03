Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    zero = -xs[1] / (2 * xs[0])
    return round(zero, 2)