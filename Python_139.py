#!/usr/bin/env python

# -*- coding: utf-8 -*-
import math


def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    >>> special_factorial(1)
    1
    >>> special_factorial(2)
    2
    >>> special_factorial(3)
    12

    return math.factorial(n)


def check(f):
    assert f(1) == 1, "Test 1"
    assert f(2) == 2, "Test 2"
    assert f(3) == 12, "Test 3"
    assert f(4) == 288, "Test 4"
    assert f(5) == 34560, "Test 5"
    assert f(6) == 24883200, "Test 6"
    print("All tests passed!")


if __name__ == "__main__":
    check(special_factorial)
    # your code here
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
