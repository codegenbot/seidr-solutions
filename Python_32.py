def find_zero(xs: list):
    if len(xs) % 2 == 1 or xs[0] != 0:
        raise ValueError("Invalid input")
    for i, x in enumerate(xs):
        y = -x / (2 * xs[i])
        if poly(xs, y) == 0:
            return y
    raise ValueError("No solution found")