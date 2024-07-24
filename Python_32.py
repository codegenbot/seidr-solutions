Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    if abs(xs[0]) < abs(xs[-1]):
        return -xs[-1]/xs[-2]
    return xs[0]/xs[1]