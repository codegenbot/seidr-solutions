Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) <= 1e-5:
        raise ValueError("xs must have largest non zero coefficient")

    return -xs[1] / xs[0]