def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None

    for i in range(n, -1, -1):
        if xs[i] != 0:
            largest_coeff = xs[i]
            break

    if largest_coeff == 0:
        return None

    for i in range(n - 1, -1, -1):
        xs[i] = xs[i] / largest_coeff

    return -1 / (xs[0] * (n // 2))