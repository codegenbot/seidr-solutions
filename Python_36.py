

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13. 
    >>> fizz_buzz(50)
    1
    >>> fizz_buzz(78)
    4
    4
    4
    >>> fizz_buzz(79)
    >>> fizz_buzz(100000)
    8026
    # REPLACE THE PREVIOUS LINE WITH YOUR CODE


def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13. 
    >>> fizz_buzz(50)
    1
    >>> fizz_buzz(78)
    4
    4
    4
    >>> fizz_buzz(79)
    >>> fizz_buzz(100000)
    8026
    # REPLACE THE PREVIOUS LINE WITH YOUR CODE
    """
    count = 0
    for i in range(1, n):
        if i % 11 == 0 or i % 13 == 0:
            count += str(i).count('7')
    return count
    """
