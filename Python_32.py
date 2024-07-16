def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("The number of coefficients must be even.")
    max_coeff = max(xs, key=abs)
    xs = [coeff / max_coeff for coeff in xs]
    n = len(xs) - 1
    p = 1.0
    while abs(p) > 1e-12:
        p = poly(xs, -1.0)
        for i in range(1, n):
            xs[i] -= p * xs[i - 1]
    return -1.0