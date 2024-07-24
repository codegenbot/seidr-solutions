Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = xs[n//2]
    b = -xs[0] / a
    return round(b, 2)