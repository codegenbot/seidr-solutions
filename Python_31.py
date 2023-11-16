

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
    if n == 1:
        return False
    elif n == 2:
        return True
    else:
        for i in range(2, n):
            if n % i == 0:
                return False
                break
        else:
            return True


def nth_prime(n):
    """Return the nth prime number.
    >>> nth_prime(1)
    2
    >>> nth_prime(2)
    3
    >>> nth_prime(3)
    5
    >>> nth_prime(11)
    31
    >>> nth_prime(100)
    541
    >>> nth_prime(200)
    1223
    >>> nth_prime(300)
    1987
    >>> nth_prime(400)
    2789
    >>> nth_prime(500)
    3571
    >>> nth_prime(600)
    4373
    >>> nth_prime(700)
    5179
    >>> nth_prime(800)
    5981
    >>> nth_prime(900)
    6779
    >>> nth_prime(1000)
    7591
    """
    count = 0
    i = 1
    while count < n:
        i += 1
        if is_prime(i):
            count += 1
    return i
    """
