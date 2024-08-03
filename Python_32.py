def find_zero(xs: list):
    n = len(xs)
    if n != 3:
        raise ValueError("xs must have exactly three coefficients")
    a, b, c = xs
    if a == 0:
        raise ValueError("a cannot be zero")
    d = b**2 - 4 * a * c
    if d < 0:
        raise ValueError("no real roots for this equation")
    x1 = (-b + d**0.5) / (2 * a)
    x2 = (-b - d**0.5) / (2 * a)
    return round(min(x1, x2), 2)