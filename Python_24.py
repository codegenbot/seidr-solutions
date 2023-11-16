

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    """
    5
    for i in range(n-1, 0, -1):
        if n % i == 0:
            return i


assert largest_divisor(15) == 5
assert largest_divisor(80) == 40
assert largest_divisor(13) == 1
