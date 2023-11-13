
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288
    """
    if n == 1:
        return 1
    else:
        return n * special_factorial(n - 1)

if __name__ == "__main__":
    import doctest


def check(func):
    assert func(1) == 1, "Test 1"
    assert func(2) == 2, "Test 2"
    assert func(3) == 12, "Test 3"
    assert func(4) == 288, "Test 4"
    assert func(5) == 34560, "Test 5"
    assert func(6) == 24883200, "Test 6"
    assert func(7) == 10897286400, "Test 7"
    assert func(8) == 3521614606208, "Test 8"
    assert func(9) == 817506060275712, "Test 9"
    assert func(10) == 1378584918498560, "Test 10"


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    check(special_factorial)
    doctest.testmod()

    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
