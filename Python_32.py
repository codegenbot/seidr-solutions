def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")

    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return 0

    for x in range(-1000, 1000):
        if poly(xs, x) == 0:
            return x