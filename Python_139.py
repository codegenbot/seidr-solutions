#!/usr/bin/env python
# -*- coding: utf-8 -*-


def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    if n == 1:
        return 1
    else:
        return special_factorial(n-1)*n


if __name__ == '__main__':
    import doctest
    doctest.testmod()

    def check(func):
        assert func(1) == 1, "Test 1"
        assert func(2) == 2, "Test 2"
        assert func(3) == 12, "Test 3"
        assert func(4) == 288, "Test 4"

    check(special_factorial)
    # your code here
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
