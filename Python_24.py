

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5

    if n <= 0:
        return False

    divisor = n - 1

    while divisor > 0:
        if n % divisor == 0:
            return divisor
        divisor -= 1

    return False


print(largest_divisor(15))
    """
