def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    if max_coeff == abs(xs[0]):
        return -xs[0] / xs[1]
    else:
        return -xs[-1] / xs[-2]