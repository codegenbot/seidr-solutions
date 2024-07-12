Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have an even number of coefficients")
    c = xs[0]
    for i in range(1, n // 2 + 1):
        c -= xs[i] / float(math.factorial(i))
    return -c