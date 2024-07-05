```
import math

def find_zero(xs: list):
    if len(xs) != 4:
        return "Error: Invalid input"
    return -xs[1] / xs[0] if xs[0] != 0 else (-xs[2] + math.sqrt((xs[1]**2)-(4*xs[0]*xs[3]))) / (2*xs[0])