Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Input list must have an even number of coefficients")
    a = xs[-1]
    if abs(a) < 1e-6:
        return 0
    x = -xs[1] / (2 * a)
    return round(x, 12)