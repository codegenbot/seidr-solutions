def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    n = len(xs) - 1
    leading_coeff = max(xs, key=abs)
    if leading_coeff == 0:
        return 0

    for i in range(n):
        if xs[i] == 0:
            continue
        return -xs[n] / xs[i]