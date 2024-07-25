def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even")
    if max(xs, key=abs) == 0:
        return 0
    for i in range(-1000, 1001):
        if poly(xs, i) == 0:
            return i