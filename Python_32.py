def find_zero(xs: list):
    n = len(xs) - 1
    res = max(abs(xs))
    while True:
        if poly(xs, -res) * poly(xs, res) <= 0:
            return -res if abs(poly(xs, -res)) < abs(poly(xs, res)) else res
        res += abs(xs[n]) + 1