```
def find_zero(xs):
    if len(xs) % 2 != 0:
        return None
    max_coeff = max([abs(coeff) for coeff in xs])
    idx = xs.index(max_coeff)
    p = poly(xs, -max_coeff / xs[idx])
    while math.isclose(poly(xs, p), 0, abs_tol=1e-6):
        if len(xs) == 2:
            return round(p, 2)
        max_coeff = max([abs(coeff) for coeff in xs])
        idx = xs.index(max_coeff)
        p = poly(xs, -max_coeff / xs[idx])
    return round(p, 2)