def find_zero(xs: list):
    # assuming even number of coefficients and largest non zero coefficient
    for i in range(len(xs)):
        if xs[i] != 0:
            largest_nonzero_index = i

    largest_nonzero_coeff = xs[largest_nonzero_index]

    if largest_nonzero_index == 1:
        return -xs[0] / xs[1]
    else:
        return 1.0