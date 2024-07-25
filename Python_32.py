def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    if xs[0] == 0:
        return 0
    for i in range(1, n + 1):
        if xs[i] != 0:
            return -xs[0] / xs[i]