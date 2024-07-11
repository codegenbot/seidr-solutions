def find_zero(xs):
    if len(xs) % 2 != 1:
        return "Error: xs must start with 0"
    for i in range(len(xs)-1):
        if xs[i] != 0:
            return "Error: xs must be [0, *coefficients*]"
    max_coeff = max(abs(x) for x in xs[1:])
    return -xs[-1] / (2 * sum(xs[1:])) if max_coeff == abs(sum(xs[1:])) else None