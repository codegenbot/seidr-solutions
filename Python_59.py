

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    i = 2
    while i * i <= n:  # while i <= sqrt(n)
        if n % i:  # if n is not divisible by i
            i += 1  # increment i
        else:  # if n is divisible by i
            n //= i  # divide n by i
    return n  # return n
    """
