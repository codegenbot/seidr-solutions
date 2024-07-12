def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = xs[-1]
    b = -xs[1] / a
    c = (xs[0] - xs[-2]) / a
    d = math.sqrt(b**2 - 4 * a * c)
    x1 = (-b + d) / 2
    return round(x1, 2)