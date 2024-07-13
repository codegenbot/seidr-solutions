Here is the completed code:

def find_zero(xs: list):
    return -xs[0] / xs[-1] if len(xs) > 0 else None