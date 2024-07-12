```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    return round(-b / (2 * a), 2)