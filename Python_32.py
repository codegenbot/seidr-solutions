Here is the completed code:

def find_zero(xs: list):
    degree = len(xs) // 2
    return -xs[degree-1] / xs[degree]
