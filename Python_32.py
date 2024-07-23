```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    d = (1 - xs[0] + xs[-1]) / (2 * (1 - xs[0]))
    return round(d, 2)