def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    largest_non_zero_coeff = max([abs(coeff) for coeff in xs[1:]])
    x = -largest_non_zero_coeff / xs[-1]
    return x