def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    for x in range(-1000, 1000):
        if round(poly(xs, x), 5) == 0:
            return x
    return None