Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = abs(max(xs))
    return -xs[1] / xs[0] if max_coeff == xs[0] else (max_coeff - math.sqrt(max_coeff**2 - xs[0]*xs[1]))/xs[0]