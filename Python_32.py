def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    n = len(xs) - 1
    largest_coeff = max(abs(coeff) for coeff in xs)
    x = -largest_coeff / (n * xs[-1])
    return x