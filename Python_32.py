def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    max_coeff = max(xs, key=abs)
    for i in range(len(xs)):
        if xs[i] == max_coeff:
            break
    return -xs[0] / xs[i]