#!/usr/bin/env python
# -*- coding: utf-8 -*-


def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(3)
    36

    result = 1
    while n > 0:
        result *= n
        n -= 1
    return result


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    # your code here
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
