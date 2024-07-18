def find_zero(xs: list):
    n = len(xs) // 2
    ys = [xs[i] / xs[-1] for i in range(n)]  # rescale coefficients by largest one
    if n == 1:
        return -ys[0]
    return -sum(ys[:-1])