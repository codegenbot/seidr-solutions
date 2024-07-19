def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return None
    for i in range(1000):
        if poly(xs, i) == 0:
            return i
    return None