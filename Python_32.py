Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[n//2]
    b = -sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs[:n//2])])
    c = sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs[n//2:])])
    return round(-b / (2*a), 2)