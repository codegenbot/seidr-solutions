

def greatest_common_divisor(a: int, b: int) -> int:
    """ Return a greatest common divisor of two integers a and b
    >>> greatest_common_divisor(3, 5)
    1
    >>> greatest_common_divisor(25, 15)
    5
    if a == 0 or b == 0:
        return 0
    elif a == b:
        return a
    elif a > b:
        return greatest_common_divisor(a - b, b)
    else:
        return greatest_common_divisor(a, b - a)


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
