Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    return (-xs[1] / xs[n-1]) ** (n/2) if n > 0 else None