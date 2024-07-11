Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    a = xs[-1]
    b = -xs[1] / a
    return round(-b / 2, 2)