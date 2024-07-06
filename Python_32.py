def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    max_coeff_idx = xs.index(max(filter(None, xs)))
    x = -xs[max_coeff_idx] / xs[1]
    return round(x, 2)