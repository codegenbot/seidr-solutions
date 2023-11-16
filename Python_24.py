

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    x = n - 1
    while x > 0:
        if n % x == 0:
            return x
        x -= 1
    return x

print(largest_divisor(15))
    """
