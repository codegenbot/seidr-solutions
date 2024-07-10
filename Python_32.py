def find_zero(a, b, c, d):
    x = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
    return round(x, 2)