Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        return 1
    return -(-xs[1] / xs[0])