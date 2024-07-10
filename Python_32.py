def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[n]
    b = sum(i * xs[i] for i in range(n))  # derivative
    return -b / (2 * a)