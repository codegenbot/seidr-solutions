def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("The number of coefficients must be even.")
    if xs[n] == 0:
        raise ValueError("The largest non-zero coefficient must be non-zero.")

    for i in range(1000):
        if poly(xs, i) == 0:
            return i
        if poly(xs, -i) == 0:
            return -i