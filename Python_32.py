def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 == 1:
        return None
    a = abs(max(xs, key=abs))
    b = abs(min(xs, key=abs))
    lo = -1
    hi = max(a, b) + 1
    while hi - lo > 1e-9:
        mid = (lo + hi) / 2
        if poly(xs, mid) < 0:
            lo = mid
        else:
            hi = mid
    return round((lo + hi) / 2, 9)