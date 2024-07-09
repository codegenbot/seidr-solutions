def find_zero(xs: list):
    assert len(xs) % 2 == 0  # check if number of coefficients is even
    assert any(xs)  # check if there is at least one non-zero coefficient

    def poly(xs: list, x: float):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    if len(xs) == 2:
        return -xs[0] / xs[1]

    zero_point = 0
    for i in range(len(xs)):
        if xs[i] != 0:
            zero_point = -xs[i] / xs[i + 1]
            break

    return zero_point