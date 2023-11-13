#!/usr/bin/env python
# -*- coding: utf-8 -*-


def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288
    if n == 0:
        return 1
    else:
        return n * special_factorial(n - 1)


def check(fn):
    assert special_factorial(1) == 1, "Test 1"
    assert special_factorial(2) == 2, "Test 2"
    assert special_factorial(3) == 12, "Test 3"
    assert special_factorial(4) == 288, "Test 4"
    assert special_factorial(5) == 34560, "Test 5"
    assert special_factorial(6) == 24883200, "Test 6"
    assert special_factorial(7) == 12541132800, "Test 7"
    assert special_factorial(8) == 5159780352, "Test 8"
    assert special_factorial(9) == 185794560768, "Test 9"
    assert special_factorial(10) == 61902833536, "Test 10"


if __name__ == "__main__":
    check(special_factorial)

    # your code here
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
