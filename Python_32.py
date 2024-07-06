def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    zero_index = xs.index(max_coeff)
    return -xs[zero_index] / xs[(zero_index + 1) % len(xs)]