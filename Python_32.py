```
def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x = -xs[1] / xs[0]
    return round(x, 2)