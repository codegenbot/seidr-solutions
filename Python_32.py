def find_zero(xs):
    for x in xs:
        if abs(x) < 1e-5:
            return -x / (xs[0] + xs[1]) if len(xs) > 2 else -x / xs[1]
    return None