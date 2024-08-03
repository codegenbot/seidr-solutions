Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    a = xs[0]
    b = xs[n//2] if n % 2 else 0
    return -b / a