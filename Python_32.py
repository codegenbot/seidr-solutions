def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    for x in [-max_coeff, max_coeff]:
        if round(poly(xs, x), 10) == 0:
            return round(x, 2)