def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    for i in range(len(xs)):
        if xs[i] == max_coeff:
            xs.remove(xs[i])
            break
    return -sum(xs) / max_coeff