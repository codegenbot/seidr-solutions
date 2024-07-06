def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1 or xs[n - 1] != 0:
        raise ValueError(
            "List must have even number of coefficients and largest non zero coefficient as the last element."
        )
    for i in range(n // 2):
        if xs[i] != 0 and xs[n - 1 - i] != 0:
            return -xs[i] / (xs[n - 1 - i] * (i + 1))