Here is the completed code:

def find_zero(xs: list):
    return (-xs[1] / xs[0]) if len(xs) == 2 else (-xs[3] - math.sqrt((xs[3]**2) - (4*xs[0]*xs[2]))/(2*xs[0]))