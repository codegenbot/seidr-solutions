import math

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    for i in range(2, n):
        a -= xs[i] / math.pow(b, (i-1)/2)
    return -b/a