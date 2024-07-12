```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    for i in range(1, n // 2 + 1):
        a = -a * (n - 2 * i) / (i * (n - 2 * i))
    return -a