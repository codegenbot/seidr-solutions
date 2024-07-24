def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        x = xs[n // 2]
        return -x / xs[-1]
    else:
        m1 = xs[(n - 1) // 2]
        m2 = xs[n // 2]
        return -(m1 + m2) / (2 * xs[-1])