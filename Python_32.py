Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1] if n > 1 else 0
    for i in range(2, n):
        b -= xs[i] * (i - 1)
    return -b / a