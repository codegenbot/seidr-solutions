def find_zero(xs: list):
    x = 0
    for i in range(len(xs)-1, 0, -1):
        x = (0 - xs[i]) / xs[i-1]
    return x