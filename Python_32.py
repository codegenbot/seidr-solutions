```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x1 = xs[0]
    xn = xs[-1]
    return (-xs[1] + x1)/(xn - xs[-2])