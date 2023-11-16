

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    for i in range(n-1, 0, -1):
        if n % i == 0:
            return i


def is_prime(n: int) -> bool:
    """ For a given number n, check if it is prime or not
    >>> is_prime(5)
    True
    >>> is_prime(15)
    False
    """
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def prime_factor(n: int) -> int:
    """ For a given number n, find the prime factor
    >>> prime_factor(15)
    3
    """
    for i in range(n-1, 0, -1):
        if n % i == 0 and is_prime(i):
            return i


def gcd(a: int, b: int) -> int:
    """ For a given two numbers a and b, find the greatest common divisor
    >>> gcd(10, 15)
    5
    >>> gcd(10, 20)
    10
    """
    while b != 0:
        a, b = b, a % b
    return a


def lcm(a: int, b: int) -> int:
    """ For a given two numbers a and b, find the least common multiple
    >>> lcm(10, 15)
    30
    >>> lcm(10, 20)
    20
    """
    return a * b // gcd(a, b)


def main():
    print(largest_divisor(15))
    print(is_prime(5))
    print(is_prime(15))
    print(prime_factor(15))
    print(gcd(10, 15))
    print(gcd(10, 20))
    print(lcm(10, 15))
    print(lcm(10, 20))


if __name__ == '__main__':
    main()
    """
