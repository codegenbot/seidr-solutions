Here is the completed code:

def find_zero(xs: list):
    return (-xs[1] / xs[0]) if len(xs) == 2 else (-xs[3] / xs[2])