```
import math
def find_zero(xs: list):
    if len(xs) < 2:
        return -xs[1] / xs[0]
    elif len(xs) == 2:
        return -xs[1] / xs[0]
    else:
        return (-xs[2] + math.sqrt((xs[1]**2) - (4*xs[0]*xs[-1])))/(2*xs[0])