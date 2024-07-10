Here is the completed code:

def find_zero(xs: list):
    return -xs[1] / xs[0] if len(xs) == 2 else -sum(xs[2::2]) / sum(xs[1::2])