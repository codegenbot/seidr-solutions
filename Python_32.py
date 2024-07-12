def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        raise ValueError("Largest non-zero coefficient should be provided")

    for i in range(n):
        if xs[i] == max_coeff:
            break

    return -xs[-1] / xs[i]