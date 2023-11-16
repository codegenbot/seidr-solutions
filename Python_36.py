

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(50)
    0
    >>> fizz_buzz(78)
    2
    >>> fizz_buzz(79)
    3
    counter = 0
    for i in range(1, n):
        if i % 11 == 0 or i % 13 == 0:
            for digit in str(i):
                if digit == "7":
                    counter += 1
    return counter


if __name__ == "__main__":
    import doctest

    doctest.testmod()
    """
