

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    >>> fizz_buzz(100000)
    8026
    count = 0
    for number in range(n):
        if number % 11 == 0 or number % 13 == 0:
            count += str(number).count('7')
    return count
    """
