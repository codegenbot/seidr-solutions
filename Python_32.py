def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    largest_nonzero_coeff = max(filter(lambda x: x != 0, xs))
    return -1 * (largest_nonzero_coeff / xs[0])