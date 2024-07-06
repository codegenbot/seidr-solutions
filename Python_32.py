def find_zero(xs):
    if len(xs) < 2:
        return "Invalid input: List must have at least two elements."
    x1 = xs[0]
    x2 = xs[1]
    n = (x1 + x2) // 2
    return -n / x2