def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")

    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return 0

    neg_xs = [-x for x in xs]
    return round(next(x for x in range(-1000, 1000) if poly(neg_xs, x) == 0), 2)