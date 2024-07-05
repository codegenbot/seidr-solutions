```Python
import math

def find_zero(xs):
    if len(xs) == 2:
        return -xs[1] / xs[0]
    else:
        return (-xs[2] + math.sqrt((xs[1]**2)-(4*xs[0]*xs[3]))) / (2*xs[0])