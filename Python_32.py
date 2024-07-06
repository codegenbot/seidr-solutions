
def find_zero(xs):
    if len(xs) == 1:
        return xs[0]
    elif len(xs) % 2 != 0:
        return None
    else:
        for i in range(len(xs) // 2):
            x = -xs[i] / xs[i + 1]
            if poly(xs, x) < 0.000001:
                return x
    return None