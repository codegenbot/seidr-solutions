

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    for num in range(n-1, 0, -1):
        if n % num == 0:
            return num
    """
