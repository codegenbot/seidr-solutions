def find_zero(xs):
    if len(xs) < 2 or not all(isinstance(x, int) for x in xs):
        return "Invalid input"
    x1, x2 = xs[0], xs[1]
    n = (x1 + x2) // 2
    return -n / x2