Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = -sum([coeff * math.pow(i, n-1) for i, coeff in enumerate(xs) if i % 2 == 1])
    d = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(d, 2)