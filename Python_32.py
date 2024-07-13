def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    largest_non_zero_coeff = max([abs(coeff) for coeff in xs[1:]])
    x = -largest_non_zero_coeff / xs[0]

    return x