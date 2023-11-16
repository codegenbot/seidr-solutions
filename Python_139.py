
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(1)
    1!

    >>> special_factorial(2)
    2! * 1!

    >>> special_factorial(3)
    3! * 2! * 1!

    >>> special_factorial(4)
    4! * 3! * 2! * 1!

    >>> special_factorial(5)
    5! * 4! * 3! * 2! * 1!

    >>> special_factorial(6)
    6! * 5! * 4! * 3! * 2! * 1!

    >>> special_factorial(7)
    7! * 6! * 5! * 4! * 3! * 2! * 1!

    >>> special_factorial(8)
    8! * 7! * 6! * 5! * 4! * 3! * 2! * 1!

    >>> special_factorial(9)
    9! * 8! * 7! * 6! * 5! * 4! * 3! * 2! * 1!

    >>> special_factorial(10)
    10! * 9! * 8! * 7! * 6! * 5! * 4! * 3! * 2! * 1!

    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


def check(special_factorial):
    """Checks special_factorial() function.

    assert special_factorial(1) == 1, "Test 1"
    assert special_factorial(2) == 2, "Test 2"
    assert special_factorial(3) == 6, "Test 3"
    assert special_factorial(4) == 24, "Test 4"
    assert special_factorial(5) == 120, "Test 5"
    assert special_factorial(6) == 720, "Test 6"
    assert special_factorial(7) == 5040, "Test 7"
    assert special_factorial(8) == 40320, "Test 8"
    assert special_factorial(9) == 362880, "Test 9"
    assert special_factorial(10) == 3628800, "Test 10"


if __name__ == '__main__':
    check(special_factorial)
    print("All tests passed!")
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
