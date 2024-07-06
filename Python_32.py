def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    leading_coeff = max((abs(x), i) for i, x in enumerate(xs))
    return -leading_coeff[1] / (len(xs) // 2)