def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return None
    for i in range(len(xs) - 1):
        if xs[i] == max_coeff:
            break
    return -xs[-1] / xs[i]