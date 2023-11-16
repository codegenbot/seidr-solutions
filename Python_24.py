

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    divisor = n - 1
    while divisor >= 1:
        if n % divisor == 0:
            return divisor
        divisor -= 1

    return "Undefined"


if __name__ == "__main__":
    # Test the function
    import doctest
    doctest.testmod()
    """
