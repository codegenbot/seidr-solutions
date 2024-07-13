Here is the completed code:

def find_zero(xs: list):
    return (-xs[1] / xs[-1]) if len(xs) > 2 else -xs[0] / xs[1]