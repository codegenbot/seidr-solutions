def find_zero(xs: list):
    n = len(xs) // 2
    a, b, c = xs[n - 2 : :]
    if a == 0:
        return -c / b
    return (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)