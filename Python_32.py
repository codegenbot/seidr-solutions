def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    a = max(xs, key=abs)
    for x in range(-1000, 1001):
        if poly(xs, x) == 0:
            return x