def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs[:-1]) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 0])
    d = (b**2 - 4 * a * c)**0.5
    return (-b + d) / (2 * a)