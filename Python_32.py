def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[0]
    b = xs[-1]

    if a * b > 0:
        return None

    if a < 0:
        xs = [-x for x in xs]

    x = -1
    for i, coeff in enumerate(xs):
        if coeff > 0:
            x = i
            break

    return -math.pow(b / xs[1], 1 / x)