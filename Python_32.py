def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    leading_coefficient = max(xs, key=abs)
    if leading_coefficient == 0:
        raise ValueError("Leading coefficient cannot be zero")
    neg_xs = [-x for x in xs]
    return round(roots(neg_xs)[0], 2)