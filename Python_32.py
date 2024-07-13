Here is the completed code:

def find_zero(xs: list):
    return (-xs[1] / xs[0]) if len(xs) == 2 else (-xs[3] - math.sqrt((math.pow(-3*xs[1], 2)) + (4* math.pow(xs[0]*xs[2]-xs[3], 3))) / (2*xs[0]))