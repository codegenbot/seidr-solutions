


def f(x):
    if x == 0:
        return 1
    return x * f(x - 1)


def check(f):
    assert f(0) == 1
    assert f(1) == 1
    assert f(2) == 2
    assert f(3) == 6
    assert f(4) == 24
    assert f(5) == 120
    assert f(10) == 3628800
    assert f(12) == 144


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    21
    """
