Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[n//2]
    b = -sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    return round(-b / (2 * a), 2)