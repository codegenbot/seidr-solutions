def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    for i in range(1, n + 1):
        if xs[i] == max_coeff:
            return -xs[0] / xs[i]