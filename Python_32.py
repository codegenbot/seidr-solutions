Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    if abs(xs[0]) < max_coeff:
        return -xs[1] / xs[0]
    else:
        return -xs[1] / xs[0]