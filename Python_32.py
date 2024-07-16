def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even.")

    xs = xs[::-1]  # Reversing the coefficients list

    for i in range(len(xs)):
        if xs[i] != 0:
            leading_coeff_index = i
            break

    leading_coeff = xs[leading_coeff_index]

    if leading_coeff == 0:
        return 0

    for i in range(1, len(xs)):
        xs[i] = xs[i] / leading_coeff

    return -1 / xs[0]  # Return the zero point