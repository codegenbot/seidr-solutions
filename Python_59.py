

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    # Complete the following code given the task description and function signature.
    factor = 2
    while factor <= n:
        if n % factor == 0:
            n //= factor
        else:
            factor += 1
    return factor


print(largest_prime_factor(13195))
    """
