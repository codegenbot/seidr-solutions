def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    for i in range(n):
        if xs[i] != 0:
            max_coeff = xs[i]
            break
    return -1 * (sum(xs[1:]) / max_coeff)