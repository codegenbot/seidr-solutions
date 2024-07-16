def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    for i in range(n):
        if xs[i] != 0:
            largest_non_zero_coefficient = xs[i]
            break
    return -largest_non_zero_coefficient / xs[-1]