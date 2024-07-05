def find_zero(xs: list):
    if len(xs) % 2 == 1 or xs[0] != 0:
        raise ValueError("Invalid input")
    for i in range(len(xs)):
        if xs[i] == 0:
            continue
        x = -xs[i-1] / (xs[i] * xs[i])
        return round(x, 2)