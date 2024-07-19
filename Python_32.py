def find_zero(xs: list):
    n = len(xs) - 1
    coeff = max(xs, key=abs)  # largest non-zero coefficient
    if n % 2 != 0 or n == 0 or coeff == 0:
        return None
    if n == 2:
        return -xs[0] / xs[1]
    if n == 4:
        a, b, c, d = xs
        delta = b**2 - 4 * a * c
        if delta < 0:
            return None
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        if a * x1**3 + b * x1**2 + c * x1 + d == 0:
            return x1
        if a * x2**3 + b * x2**2 + c * x2 + d == 0:
            return x2
    return None