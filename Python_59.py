

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2

    # start with the smallest prime number
    factor = 2

    # keep dividing by the same factor until the number can be divided by
    # another factor
    while n % factor == 0:
        n = n / factor

    # increase the factor by 1
    factor += 1

    # keep increasing the factor until it is larger than the number
    while factor < n:
        # if the factor can divide the number, divide it and start again
        if n % factor == 0:
            n = n / factor
            factor = 2
        # if the factor can't divide the number, increase it by 1
        else:
            factor += 1

    # return the factor
    return factor
    """
