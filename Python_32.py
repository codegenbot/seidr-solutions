Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    for i in range(n // 2, 0, -1):
        a = (a - xs[n - i]) / (i * xs[n - i])
    return round(-a, 2)