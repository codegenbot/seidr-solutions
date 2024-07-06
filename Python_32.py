Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    a = xs[n//2]  # largest non-zero coefficient
    if a == 0:
        return None  # should never happen with even number of coefficients
    return round(-a, 2)