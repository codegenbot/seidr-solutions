

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    # Prime factorization is always unique.
    # Start with 2 and keep dividing by 2 until it is no longer divisible by 2.
    # Then move on to 3, 5, 7, 9, etc.
    # Once the number is no longer divisible by any number, it is prime.
    # We can stop when the number is prime.
    prime_factor = 0
    while n % 2 == 0:
        prime_factor = 2
        n //= 2
    factor = 3
    while n > 1:
        while n % factor == 0:
            prime_factor = factor
            n //= factor
        factor += 2
    return prime_factor
    """
