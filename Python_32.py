Here is the completed code:

def find_zero(xs: list):
    a = xs[-1]
    return -a / xs[0] if a != 0 else None