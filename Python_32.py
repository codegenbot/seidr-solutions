def find_zero(xs: list):
    x = None
    for i in range(len(xs) - 1):
        if xs[i] == max(xs) and xs[i] != 0:
            x = -xs[i + 1] / xs[i]
            break
    return x