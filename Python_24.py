

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5

    # Start with the largest number that is smaller than n
    divisor = n - 1

    # Keep trying smaller numbers
    while divisor > 0:
        if n % divisor == 0:
            return divisor
        divisor -= 1

    # If we reach here, n is prime
    return 1


def num_divisors(n: int) -> int:
    """ For a given number n, return the number of divisors of n
    >>> num_divisors(15)
    4
    """

    # Start with the largest number that is smaller than n
    divisor = n - 1
    count = 0

    # Keep trying smaller numbers
    while divisor > 0:
        if n % divisor == 0:
            count += 1
        divisor -= 1

    # If we reach here, n is prime
    return count + 1
    """
