def find_zero(xs: list):
    assert len(xs) % 2 == 0
    degree = len(xs) - 1
    largest_non_zero_coefficient = max(abs(coeff) for coeff in xs if coeff != 0)

    for i in range(len(xs)):
        if abs(xs[i]) == largest_non_zero_coefficient:
            leading_coefficient_index = i
            break

    if leading_coefficient_index % 2 == 0:
        return -1
    else:
        return -1 * xs[leading_coefficient_index] / xs[leading_coefficient_index - 1]