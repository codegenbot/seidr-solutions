
def find_zero(xs: list):
    if len(xs) % 2 == 1 or xs[-1] != 0:
        raise ValueError("Invalid input")
    for i in range(len(xs) // 2):
        x = -xs[i] / xs[i + 1]
        if poly(xs, x) < 1e-6:
            return round(x, 2)
    raise ValueError("No solution found")