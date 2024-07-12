Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    m = n // 2
    a = xs[m]
    b = xs[m-1]
    c = -(b + (a/b) if b else math.inf)
    return -c / (2 * b)