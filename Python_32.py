def find_zero(xs: list):
    max_coeff = max(xs, key=abs)
    for i, coeff in enumerate(xs):
        if coeff == max_coeff:
            break
    return -coeff / xs[i - 1]