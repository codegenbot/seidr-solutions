def find_zero(xs: list):
    if len(xs) % 2 == 1 or xs[0] != 0:
        raise ValueError("Invalid input")
    for i in range(len(xs)):
        x = -xs[i - 1] / (2 * xs[i])
        if poly(xs, x) == 0:
            return x
    raise ValueError("No solution found")