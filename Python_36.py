

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    1
    >>> fizz_buzz(77)
    4
    >>> fizz_buzz(78)
    5
    c = 0
    for i in range(n):
        if i % 11 == 0 or i % 13 == 0:
            c += str(i).count('7')
    return c
    """
