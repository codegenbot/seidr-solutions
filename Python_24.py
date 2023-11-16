

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    if n == 0:
        return None
    if n == 1:
        return 1
    if n == 2:
        return 1
    for i in range(1, n):
        if n % i == 0:
            return i


if __name__ == "__main__":
    print(largest_divisor(15))
    """
