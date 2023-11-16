

def is_prime(n):
    """Return true if a given number is prime, and false otherwise.
    >>> is_prime(6)
    False
    >>> is_prime(101)
    True
    >>> is_prime(11)
    True
    >>> is_prime(13441)
    True
    >>> is_prime(61)
    True
    >>> is_prime(4)
    False
    >>> is_prime(1)
    False

    is_prime = True

    if n > 1:
        for i in range(2,n):
            if (n % i) == 0:
                is_prime = False
                break
        else:
            is_prime = True
    else:
        is_prime = False

    return is_prime

# The only lines we added were the first two lines above this comment and the last line.
    """
