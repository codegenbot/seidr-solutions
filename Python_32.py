Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    a = xs[n//2]
    return -a / xs[0]