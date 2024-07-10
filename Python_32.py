def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    assert xs[n] != 0
    p = [-x for x in xs[:-1]]
    return round(np.roots(p)[0].real, 2)