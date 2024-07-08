def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], max(abs(xs))
    for i in range(n):
        if xs[i] == b:
            a = xs[i + 1]
            break
    return -a / b