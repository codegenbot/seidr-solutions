def find_zero(xs: list):
    if len(xs) % 2 == 0 and xs[0]:
        for i in range(len(xs)):
            if xs[i] != 0:
                return -xs[i-1] / (2 * xs[i])