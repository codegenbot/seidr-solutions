def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    largest_non_zero_coeff = max([abs(coeff) for coeff in xs if coeff != 0])
    for i in range(len(xs)):
        if xs[i] == largest_non_zero_coeff:
            break
    return -xs[i - 1] / xs[i]