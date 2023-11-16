

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    largest_factor = 1
    factor = 2
    while factor**2 <= n:
        if n % factor == 0:
            n = n // factor
            largest_factor = factor
        else:
            factor += 1
    if n > largest_factor:
        largest_factor = n
    return largest_factor
    """
