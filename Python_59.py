

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2

    # Initialize largest factor.
    largest_factor = 2

    # Update largest factor while n is not prime.
    while n > largest_factor:
        if n % largest_factor == 0:
            n //= largest_factor
        else:
            largest_factor += 1

    return largest_factor
    """
