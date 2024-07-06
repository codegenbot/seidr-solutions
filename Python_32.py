def find_zero(xs: list[float]) -> float:
    if len(xs) == 1 or not any(x != 0 for x in xs):
        raise ValueError("Input must contain at least one non-zero element")

    for i in range(len(xs)):
        if xs[i] == 0:
            continue
        x = -xs[i - 1] / (xs[i] * xs[i])
        return round(x, 2)