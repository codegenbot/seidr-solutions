Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    for i in range(1, n // 2 + 1):
        a += xs[i] / (i * math.factorial(i))
    return -a