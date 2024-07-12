def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Input list must have an even number of coefficients")

    a = max(xs, key=abs)
    if a == 0:
        raise ValueError("Input list must have non-zero coefficients")

    if a < 0:
        xs = [-c for c in xs]
    step = 0.1 if a > 1 else a / 2

    for x in [i * step for i in range(int(1 / step * 10))]:
        if abs(poly(xs, x)) < 0.000001:
            return round(x, 6)