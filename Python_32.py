def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "Number of coefficients must be even"
    leading_coeff = abs(max(xs))
    return -leading_coeff