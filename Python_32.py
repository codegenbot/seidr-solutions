def find_zero(xs):
    if len(xs) % 2 != 0 or xs[0] != 0:
        return "Error: xs must start with 0"
    for i in range(len(xs) - 1):
        if xs[i] != 0:
            return "Error: xs must be [0, *coefficients*]"
    if len(set(xs[1:])) == 1:
        return None
    return -xs[-1] / (2 * sum(xs[1:]))