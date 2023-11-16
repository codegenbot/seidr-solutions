

def greatest_common_divisor(a: int, b: int) -> int:
    """ Return a greatest common divisor of two integers a and b
    >>> greatest_common_divisor(3, 5)
    1
    >>> greatest_common_divisor(25, 15)
    5
    gcd = 1

    if a < b:
        a, b = b, a

    for i in range(2, a):
        if a % i == 0 and b % i == 0:
            gcd = i

    return gcd


if __name__ == '__main__':
    print(greatest_common_divisor(int(input()), int(input())))
    """
