```
def find_zero(xs: list):
    if len(xs) < 2:
        raise ValueError("xs must have at least two coefficients")
    for i in range(len(xs)):
        if xs[i] == 0:
            return None
    n = len(xs)
    x = xs[1]
    for i in range(2, n):
        x = (x - xs[i-1]) / xs[i]
    return x