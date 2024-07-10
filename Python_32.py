def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    d = xs[3]
    return -b / a


# Do not modify below this line
if __name__ == "__main__":
    import doctest

    doctest.testmod()