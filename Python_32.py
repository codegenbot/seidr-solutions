def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")

    max_coeff = max([abs(coeff) for coeff in xs])
    if max_coeff == 0:
        return 0

    for i in range(n):
        if xs[i] == max_coeff:
            break

    return -xs[-1] / xs[i]