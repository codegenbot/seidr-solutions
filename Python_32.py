def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = xs[0]
    for i in range(1, n // 2 + 1):
        a += (-1) ** i * xs[i] / math.factorial(i)
    x = -a
    return round(x, 2)