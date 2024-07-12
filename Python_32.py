def find_zero(xs: list):
    n = len(xs) - 1
    assert n % 2 == 0
    for i in range(n):
        if xs[i] != 0:
            largest_non_zero_coeff = xs[i]
            break
    return -xs[n] / largest_non_zero_coeff