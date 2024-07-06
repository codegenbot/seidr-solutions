def find_zero(xs):
    n = len(xs) // 2
    for i in range(len(xs)):
        if xs[i] == 0:
            return -xs[n - 1] / xs[i]
    return -xs[n - 1] / xs[-1]