def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    largest_non_zero_coeff = max([abs(coeff) for coeff in xs if coeff != 0])

    for i in range(n):
        if abs(xs[i]) == largest_non_zero_coeff:
            if i == 0:
                return 0
            else:
                return -xs[0] / xs[i]


if __name__ == "__main__":
    import doctest

    doctest.testmod()