def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 == 1:
        return None
    a, b = -1, max([abs(coeff) for coeff in xs])
    while b - a > 1e-9:
        m = (a + b) / 2
        if poly(xs, a) * poly(xs, m) < 0:
            b = m
        else:
            a = m
    return (a + b) / 2