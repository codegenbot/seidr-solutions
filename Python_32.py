def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs) if i % 2 != 0])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 4 == 3])
    d = -a
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)