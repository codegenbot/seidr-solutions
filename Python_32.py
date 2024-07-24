Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) < 1e-6:
        return None
    x = -xs[1] / xs[0]
    return round(x, 2)