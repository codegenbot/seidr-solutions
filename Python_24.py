

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    divisor = n - 1
    while True:
        if n % divisor == 0:
            return divisor
        else:
            divisor -= 1

if __name__ == '__main__':
    print(largest_divisor(15))
    """
