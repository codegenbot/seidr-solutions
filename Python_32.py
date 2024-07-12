Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    return (-xs[1] / xs[n-1]) if n > 2 else -xs[0] / xs[1]