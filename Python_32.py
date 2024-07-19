def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = max(abs(coeff) for coeff in xs)
    x = -1
    while poly(xs, x) != 0:
        x += 0.1
    return round(x, 2)