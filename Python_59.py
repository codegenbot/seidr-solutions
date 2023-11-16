

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2

    # find the first divisor of n
    candidate = 2
    while n % candidate != 0:
        candidate += 1

    # if the first divisor is n itself, it must be a prime
    if candidate == n:
        return n

    # else, we can divide n by the first divisor, and recursively find
    # the largest prime factor of the remaining
    return largest_prime_factor(n // candidate)
    """
