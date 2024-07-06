Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x_coefficient = xs[-1]
    if abs(x_coefficient) < 1e-6:
        return None
    x = -xs[1] / (2 * x_coefficient)
    return round(x, 2)