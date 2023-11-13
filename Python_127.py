from math import sqrt


def is_prime(n):
    """
    Check if a number is prime.
    """
    if n <= 1:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def intersection(interval1, interval2):
    """You are given two intervals,
    where each interval is a pair of integers. For example, interval = (start, end) = (1, 2).
    The given intervals are closed which means that the interval (start, end)
    includes both start and end.
    For each given interval, it is assumed that its start is less or equal its end.
    Your task is to determine whether the length of intersection of these two 
    intervals is a prime number.
    Example, the intersection of the intervals (1, 3), (2, 4) is (2, 3)
    which its length is 1, which not a prime number.
    If the length of the intersection is a prime number, return "YES",
    otherwise, return "NO".
    If the two intervals don't intersect, return "NO".


    [input/output] samples:
    intersection((1, 2), (2, 3)) ==> "NO"
    intersection((-1, 1), (0, 4)) ==> "NO"
    intersection((-3, -1), (-5, 5)) == "YES"
    intersection((-3, -1), (-5, 5)) == "YES"
    intersection((-3, -1), (-5, 5)) == "YES"
    """
    intersection((-3, -1), (-5, 5)) == "YES"
    start = max(interval1[0], interval2[0])
    end = min(interval1[1], interval2[1])
    if start > end:
        return "NO"
    if is_prime(end - start + 1):
        return "YES"
    return "NO"


def check(func):
    assert func((1, 2), (2, 3)) == "NO"
    assert func((-1, 1), (0, 4)) == "NO"
    assert func((-3, -1), (-5, 5)) == "YES"
    assert func((-2, -2), (-3, -2)) == "NO"
    assert func((-2, -2), (-2, -2)) == "YES"
    assert func((-2, -2), (-2, -1)) == "NO"
    assert func((-2, -2), (-1, -1)) == "NO"
    assert func((-2, -2), (-1, -2)) == "NO"
    assert func((-2, -2), (0, 0)) == "NO"
    assert func((-2, -2), (0, 1)) == "NO"
    assert func((-2, -2), (0, 2)) == "NO"
    assert func((-2, -2), (0, 3)) == "NO"
    assert func((-2, -2), (0, 4)) == "NO"
    assert func((-2, -2), (1, 1)) == "NO"
    assert func((-2, -2), (1, 2)) == "NO"
    assert func((-2, -2), (1, 3)) == "NO"
    assert func((-2, -2), (1, 4)) == "NO"
    assert func((-2, -2), (2, 2)) == "NO"
    assert func((-2, -2), (2, 3)) == "NO"
    assert func((-2, -2), (2, 4)) == "NO"
    assert func((-2, -2), (3, 3)) == "NO"
    assert func((-2, -2), (3, 4)) == "NO"
    assert func((-2, -2), (4, 4)) == "NO"
    assert func((-2, -1), (-3, -2)) == "NO"
    assert func((-2, -1), (-2, -2)) == "NO"
    assert func((-2, -1), (-2, -1)) == "YES"
    assert func((-2, -1), (-1, -1)) == "NO"
    assert func((-2, -1), (-1, -2)) == "NO"
    assert func((-2, -1), (0, 0)) == "NO"
    assert func((-2, -1), (0, 1)) == "NO"
    assert func((-2, -1), (0, 2)) == "NO"
    assert func((-2, -1), (0, 3)) == "NO"
    assert func((-2, -1), (0, 4)) == "NO"
    assert func((-2, -1), (1, 1)) == "NO"
    assert func((-2, -1), (1, 2)) == "NO"
    assert func((-2, -1), (1, 3)) == "NO"
    assert func((-2, -1), (1, 4)) == "NO"
    assert func((-2, -1), (2, 2)) == "NO"
    assert func((-2, -1), (2, 3)) == "NO"
    assert func((-2, -1), (2, 4)) == "NO"
    assert func((-2, -1), (3, 3)) == "NO"
    assert func((-2, -1), (3, 4)) == "NO"
    assert func((-2, -1), (4, 4)) == "NO"
    assert func((-2, 0), (-3, -2)) == "NO"
    assert func((-2, 0), (-2, -2)) == "NO"
    assert func((-2, 0), (-2, -1)) == "NO"
    assert func((-2, 0), (-1, -1)) == "NO"
    assert func((-2, 0), (-1, -2)) == "NO"
    assert func((-2, 0), (0, 0)) == "YES"
    assert func((-2, 0), (0, 1)) == "NO"
    assert func((-2, 0), (0, 2)) == "NO"
    assert func((-2, 0), (0, 3)) == "NO"
    assert func((-2, 0), (0, 4)) == "NO"
    assert func((-2, 0), (1, 1)) == "NO"
    assert func((-2, 0), (1, 2)) == "NO"
    assert func((-2, 0), (1, 3)) == "NO"
    assert func((-2, 0), (1, 4)) == "NO"
    assert func((-2, 0), (2, 2)) == "NO"
    assert func((-2, 0), (2, 3)) == "NO"
    assert func((-2, 0), (2, 4)) == "NO"
    assert func((-2, 0), (3, 3)) == "NO"
    assert func((-2, 0), (3, 4)) == "NO"
    assert func((-2, 0), (4, 4)) == "NO"


check(intersection)
