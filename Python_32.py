Here is the solution:

def find_zero(xs: list):
    return -xs[1] / xs[0] if len(xs) == 2 else (-xs[2] + math.sqrt((xs[1]**2)-(4*xs[0]*xs[3]))) / (2*xs[0])