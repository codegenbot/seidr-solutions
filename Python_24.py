

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    divisor = n // 2 + 1
    while divisor > 1:
        if n % divisor == 0:
            return divisor
        divisor -= 1
    return 1


def is_prime(n: int) -> bool:
    """ For a given number n, determine if it is a prime number
    >>> is_prime(1)
    False
    >>> is_prime(2)
    True
    >>> is_prime(8)
    False
    >>> is_prime(11)
    True
    >>> is_prime(-10)
    False
    """
    if n <= 1:
        return False
    elif n == 2:
        return True
    elif n % 2 == 0:
        return False

    divisor = 3
    while divisor * divisor <= n:
        if n % divisor == 0:
            return False
        divisor += 2
    return True
    """
