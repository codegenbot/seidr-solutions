def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Expected an even number of coefficients.")
    degree = len(xs) - 1
    leading_coefficient = max(xs, key=abs)
    modified_xs = [coeff / leading_coefficient for coeff in xs]
    for i in range(degree):
        if modified_xs[i] == 0:
            return i
    return -modified_xs[degree] / modified_xs[degree - 1]