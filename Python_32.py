Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = -a / (b + c * math.pow(2, (-1) * (n-4)/2))
    return round(d, 2)