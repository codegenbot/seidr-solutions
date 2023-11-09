

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    >>> largest_prime_factor(31)
    31
    i = 2
    while i * i <= n:  # O(sqrt(n))
        if n % i:  # O(1)
            i += 1  # O(1)
        else:  # O(1)
            n //= i  # O(1)
    return n  # O(1)
    """
