def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -sum(xs[i] / xs[n - 1] for i in range(n) if i % 2 == 1)
    return round(x, 2)