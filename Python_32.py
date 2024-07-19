def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    largest_non_zero_coeff = max(filter(lambda x: x != 0, xs))
    possible_zeros = [
        i for i, coeff in enumerate(xs) if coeff == largest_non_zero_coeff
    ]

    for zero in possible_zeros:
        if poly(xs, -zero) == 0:
            return -zero