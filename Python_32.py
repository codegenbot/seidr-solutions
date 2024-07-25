def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    if max(xs, key=abs) == 0:
        return 0
    for x in range(-1000, 1000):
        if poly(xs, x) == 0:
            return x