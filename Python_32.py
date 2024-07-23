Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    a = xs[n//2]
    b = -xs[0]/a
    return round(b, 2)