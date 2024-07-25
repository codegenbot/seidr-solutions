def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    for i in range(n, -1, -1):
        if xs[i] != 0:
            largest_non_zero = xs[i]
            break
    return -1 / largest_non_zero