def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    largest_non_zero_coeff = max(abs(coeff) for coeff in xs if coeff != 0)
    x = -largest_non_zero_coeff
    while poly(xs, x) != 0:
        x += 0.01
    return x