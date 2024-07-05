def find_zero(xs: list[int]) -> float:
    if len(xs) == 1:
        return 0.0
    for i in range(len(xs)):
        if xs[i] == 0:
            continue
        x = -xs[i-1] / (xs[i] * xs[i])
        return round(x, 2)