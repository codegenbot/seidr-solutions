Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")

    x = -sum(c for i, c in enumerate(xs) if i % 2 == 1) / sum(c for i, c in enumerate(xs) if i % 2 == 0)
    return round(x, 2)