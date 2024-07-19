def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")

    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        raise ValueError("Largest non-zero coefficient is zero")

    for i in range(len(xs)):
        if xs[i] == max_coeff:
            break

    return -xs[i - 1] / xs[i]