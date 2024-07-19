def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    for i in range(n):
        if xs[i] != 0:
            leading_coeff = xs[i]
            break

    return -xs[-1] / leading_coeff