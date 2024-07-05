`import math
def find_zero(xs: list):
    if len(xs) < 2:
        return -1/(xs[0] + xs[1])
    elif len(xs) == 2:
        return -xs[1] / xs[0]
    else:
        a, b, c = xs
        return (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)`