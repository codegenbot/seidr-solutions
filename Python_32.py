def find_zero(xs: list):
    n = len(xs) - 1
    for i in range(len(xs)):
        if xs[i] != 0:
            leading_coeff = xs[i]
            break
    return -xs[0] / leading_coeff