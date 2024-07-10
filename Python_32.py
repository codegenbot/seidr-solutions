def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    total_left = xs[0]
    total_right = xs[-1]
    for i in range(1, n // 2):
        total_left += xs[i * 2 - 1] * (x**i)
        total_right += xs[i * 2] * (x**i)
    return -total_right / total_left