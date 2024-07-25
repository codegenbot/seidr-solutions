def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even.")
    if xs[n] == 0:
        raise ValueError("Largest non-zero coefficient should be non-zero.")
    roots = [i for i in range(-1000, 1001) if round(poly(xs, i), 5) == 0]
    return roots[0] if roots else None