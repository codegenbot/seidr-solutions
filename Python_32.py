Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -sum(c for c in xs[:-1] for i in range(len(xs)-1)) / sum(i*c for i, c in enumerate(xs))
    return round(x, 2)