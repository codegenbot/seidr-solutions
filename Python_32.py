def find_zero(xs: list):
    for i in range(len(xs) - 1):
        if xs[i] != 0 and xs[i + 1] != 0:
            break
    return -xs[i] / xs[i + 1]