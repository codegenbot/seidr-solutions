

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2

    def _is_prime(n: int) -> bool:
        """Return True if n is a prime number."""
        for i in range(2, n):
            if n % i == 0:
                return False
        return True

    def _largest_factor(n: int) -> int:
        """Return the largest prime factor of n."""
        for i in range(2, n):
            if n % i == 0 and _is_prime(i):
                return i
        return n

    return _largest_factor(n)
    """
