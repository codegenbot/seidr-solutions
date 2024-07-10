Here is the completed code:

def find_zero(xs: list):
    n = len(xs) // 2
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[n]
    b = sum([coeff for i, coeff in enumerate(xs[:n]) if i % 2 == 1])
    c = xs[0] - (b / a)
    return round(c, 2)