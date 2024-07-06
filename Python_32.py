Here is the solution:

def find_zero(xs: list):
    n = len(xs) // 2
    return (-xs[n-1] / xs[n]) ** (1.0 / xs[n].__abs__() if xs[n] != 0 else float('inf'))