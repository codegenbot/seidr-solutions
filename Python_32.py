def find_zero(xs: list):
    if len(xs) % 2 == 1 or xs[-1] != 0:
        return None
    for i in range(len(xs) // 2):
        x = -xs[i] / xs[i + 1]
        if poly(xs, x) < 0.000001:
            return x
    return None