
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    pass
    def factorial(n):
        if n == 0:
            return 1
        else:
            return n * factorial(n-1)

    return factorial(n) * factorial(n-1) * factorial(n-2)


if __name__ == '__main__':
    import doctest
    doctest.testmod()

    def check(function):
        assert function(1) == 1, "Test 1"
        assert function(2) == 2, "Test 2"
        assert function(3) == 12, "Test 3"
        assert function(4) == 288, "Test 4"
        assert function(5) == 34560, "Test 5"
        assert function(6) == 24883200, "Test 6"
        assert function(7) == 125411328000, "Test 7"
        assert function(8) == 479001600, "Test 8"
        assert function(9) == 1307674368000, "Test 9"
        assert function(10) == 6227020800, "Test 10"
        assert function(11) == 20922789888000, "Test 11"
        assert function(12) == 6402373705728000, "Test 12"
        assert function(13) == 2432902008176640000, "Test 13"
        assert function(14) == 51090942171709440000, "Test 14"
        assert function(15) == 1124000727777607680000, "Test 15"
        assert function(16) == 25852016738884976640000, "Test 16"
        assert function(17) == 620448401733239439360000, "Test 17"
        assert function(18) == 15511210043330985984000000, "Test 18"
        assert function(19) == 403291461126605635584000000, "Test 19"

    check(special_factorial)
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
