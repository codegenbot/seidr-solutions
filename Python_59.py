

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    "*** YOUR CODE HERE ***"
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
    return n


def largest_prime_factor_rec(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    """
    "*** YOUR CODE HERE ***"
    if n == 1:
        return 1
    elif n % 2 == 0:
        return largest_prime_factor_rec(n // 2)
    else:
        return largest_prime_factor_rec(n - 1)
    2
    """
