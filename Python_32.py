def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    max_coeff = abs(max(xs))
    for x in [-max_coeff - 1, -max_coeff, max_coeff]:
        if round(poly(xs, x), 10) == 0:
            return round(x, 2)