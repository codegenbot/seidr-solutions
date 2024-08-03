```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = sum(-x for x in xs[1::2])
    c = sum(x for x in xs[2::2])
    x = -b / (2 * c)
    return round(x, 2)