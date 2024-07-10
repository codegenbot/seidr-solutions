def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have an even number of coefficients")

    max_non_zero_coeff = max([abs(coeff) for coeff in xs if coeff != 0])
    sign = -1 if xs[0] < 0 else 1

    return max_non_zero_coeff / xs[0] * sign