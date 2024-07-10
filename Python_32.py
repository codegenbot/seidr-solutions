```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    sum1 = 0
    sum2 = 0
    for i in range(n // 2):
        sum1 += xs[2*i] * xs[i]
        sum2 += xs[2*i + 1] * xs[i]
    zero = (-sum2) / sum1 if sum1 != 0 else None
    return zero