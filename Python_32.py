def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    if max(xs, key=abs) == 0:
        raise ValueError("Largest non-zero coefficient must be non-zero")

    return -xs[0] / xs[1]