Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[n//2]
    b = sum(-c / a for c in xs[:n//2])
    return -b / (2*a)