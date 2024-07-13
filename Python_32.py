Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    x = (-xs[1] + math.sqrt((xs[1]**2) - (4 * xs[0] * xs[n-1]))) / (2 * xs[0])
    return round(x, 2)