def find_zero(xs: list):
    for i in range(len(xs) - 1):
        if xs[i] != 0:
            break
    return -xs[-1] / xs[i]