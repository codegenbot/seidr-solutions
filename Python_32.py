def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        raise ValueError("No non-zero coefficients found")
    for i in range(len(xs) - 1):
        a, b = xs[i], xs[i + 1]
        if a * b < 0:
            return -a / b
    return None