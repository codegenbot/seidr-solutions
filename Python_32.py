```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    if a == 0:
        raise ValueError("coefficients must be for a quadratic equation (a != 0)")
    b = -xs[1] / a
    return round(-b / (2 * a), 2)