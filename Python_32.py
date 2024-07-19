def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even.")
    if xs[n] == 0:
        raise ValueError("Largest non-zero coefficient must be non-zero.")
    return -xs[0] / xs[1]


if __name__ == "__main__":
    import doctest

    doctest.testmod()