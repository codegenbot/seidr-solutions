Here is the completed code:

def find_zero(xs: list):
    return (-xs[1] / xs[0]) if len(xs) == 2 else math.sqrt((-xs[3] + math.sqrt((xs[4]**2*4*xs[0]*(3*xs[1]-xs[2]))))/(2*xs[0]))