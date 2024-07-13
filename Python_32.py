def find_zero(xs: list):
    for i in range(1, len(xs)):
        if xs[i] != 0:
            return -xs[0] / xs[i]