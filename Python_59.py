

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    2
    >>> largest_prime_factor(2048)
    2

    if not isinstance(n, int) or n < 2:
        return None

    i = 2
    while i * i <= n:
        if n % i == 0:
            n //= i
        else:
            i += 1

    return n
    """
