Here is the completed code:

def find_zero(xs: list):
    return (-xs[1] / xs[-1]) ** (1/len(xs))