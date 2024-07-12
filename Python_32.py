def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    max_coefficient = max(xs, key=abs)
    if max_coefficient == 0:
        raise ValueError("Largest non-zero coefficient must be non-zero")
    neg_xs = [-x for x in xs]
    return round(optimize.brentq(poly, -10, 10, args=(neg_xs,), xtol=1e-10), 2)