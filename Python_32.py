def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    if max(xs) == 0:
        raise ValueError("No non-zero coefficients found")

    for i in range(len(xs) - 1, -1, -1):
        if xs[i] != 0:
            return round(-xs[i - 1] / xs[i], 2)