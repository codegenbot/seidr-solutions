def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have an even number of coefficients")

    xs = xs[::-1]
    for i in range(1, len(xs)):
        if xs[i] != 0:
            return -xs[i - 1] / xs[i]