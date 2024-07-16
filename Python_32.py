def find_zero(xs: list):
    for i in range(len(xs) - 1):
        if xs[i] != 0:
            leading_coefficient = xs[i]
            break
    for i in range(len(xs)):
        xs[i] /= leading_coefficient
    return -1 * xs[0]