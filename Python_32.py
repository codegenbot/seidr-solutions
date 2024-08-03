Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    a = xs[n//2]
    return -a / xs[0]