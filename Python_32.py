Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = xs[1]
    for i in range(2, n):
        a, b = b, b * (-xs[i]) + a
    return -b / (n//2)