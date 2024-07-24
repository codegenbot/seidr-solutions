def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 0:
        m1 = xs[n // 2 - 1]
        m2 = xs[n // 2]
        return -(m1 + m2) / (m1 + m2)
    else:
        return -xs[n // 2] / xs[-1]