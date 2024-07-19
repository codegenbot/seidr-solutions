def find_zero(xs: list):
    def poly(xs: list, x: float):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    def f(x):
        return poly(xs, x)

    lo, hi = -10**9, 10**9
    while hi - lo > 1e-9:
        mid = (lo + hi) / 2
        if f(mid) == 0:
            return mid
        if f(lo) * f(mid) < 0:
            hi = mid
        else:
            lo = mid
    return lo