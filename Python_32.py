```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x1 = xs[1]
    xn = xs[n-1]
    zero = -x1 / xn
    return zero