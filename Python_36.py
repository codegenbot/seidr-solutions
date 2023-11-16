

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    3
    count = 0
    for integer in range(77, n):
        if integer % 11 == 0 or integer % 13 == 0:
            count += digit_count(integer, 7)
    return count


def digit_count(n: int, digit: int) -> int:
    """Return the number of times digit appears in the digits of n
    >>> digit_count(78912, 9)
    1
    >>> digit_count(785199, 9)
    2
    >>> digit_count(753919, 1)
    3
    """
    count = 0
    while n > 0:
        digit_in_n = n % 10
        n = n // 10
        if digit_in_n == digit:
            count += 1
    return count
    """
