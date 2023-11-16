
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288



def special_factorial(n):
    # TODO: Complete the following code given the task description and function
    # signature.
    pass
    if n == 0:
        return 1
    else:
        return n * special_factorial(n-1)


def check(special_factorial):
    assert special_factorial(1) == 1, "Test 1"
    assert special_factorial(2) == 2, "Test 2"
    assert special_factorial(3) == 12, "Test 3"
    assert special_factorial(4) == 288, "Test 4"
    assert special_factorial(5) == 34560, "Test 5"


if __name__ == "__main__":
    check(special_factorial)
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
