def find_negative_ratio(xs):
    if len(xs) == 0:
        raise ValueError("Input list must not be empty.")
    for i in range(len(xs)):
        if xs[i] == 0:
            continue
        x = -xs[i-1] / (xs[i] * xs[i])
        return round(x, 2)