Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    a0, *coeffs, an = xs
    x = -an / coeffs[-1]
    return round(x, 2)