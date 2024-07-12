```
def find_zero(xs: list):
    if len(xs) < 2 or xs[-1] == 0:
        raise ValueError("xs must have at least two coefficients and the last one should be non-zero")
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -xs[1] / a
    return round(-b / (2 * a), 2)