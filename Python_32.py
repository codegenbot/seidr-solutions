Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    a0 = xs[0]
    an = xs[n-1]
    
    return -a0/an