def find_zero(xs: list) -> float:
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a, b, c = xs[0], xs[1], xs[2]
    x = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
    return round(x, 2)