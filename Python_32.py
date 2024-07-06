Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None  # invalid number of coefficients
    root = -xs[1] / xs[3]
    return round(root, 2)