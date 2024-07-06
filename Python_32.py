def find_zero(xs: list):
    if len(xs) % 2 == 0 and xs[-1] != 0:
        return None
    for i in range(len(xs)):
        x = -xs[i] / xs[i + 1]
        if poly(xs, x) < 0.0001:
            return x
    return None