def find_zero(xs: list):
    for i in range(len(xs) - 1):
        if xs[i] != 0:
            leading_coeff = xs[i]
            break
    return -xs[-1] / leading_coeff