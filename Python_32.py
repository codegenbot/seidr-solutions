Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("xs must have largest non zero coefficient")

    def poly(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    a = xs[0]
    b = -sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 4 == 3])

    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2 * a)
    return round(x, 2)