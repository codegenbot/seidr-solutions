

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    x = 1
    for i in range(n):
        if n % (n - i) == 0:
            x = n - i
    return x
    """
