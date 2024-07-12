def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even.")

    xs_sorted = sorted(xs, key=abs, reverse=True)
    largest_non_zero = xs_sorted[0]

    if largest_non_zero == 0:
        raise ValueError("Largest non zero coefficient must not be zero.")

    if len(xs) == 2:
        return -xs[0] / xs[1]

    positive_xs = [abs(coeff) for coeff in xs[1::2]]
    max_ratio = max(positive_xs) / abs(xs[0])

    return 1 / max_ratio