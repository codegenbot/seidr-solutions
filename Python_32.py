Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    a = xs[0]
    b = xs[1]

    x = -b / (2 * a)

    return round(x, 2)