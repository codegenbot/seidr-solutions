

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    for i in range(n-1, 0, -1):
        if n % i == 0:
            return i


def is_prime(n: int) -> bool:
    """ For a given number n, return True if n is prime, and False otherwise
    >>> is_prime(7)
    True
    >>> is_prime(10)
    False
    """
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def nth_prime(n: int) -> int:
    """ For a given number n, return the nth prime number
    >>> nth_prime(6)
    13
    """
    primes = []
    num = 2
    while len(primes) < n:
        if is_prime(num):
            primes.append(num)
        num += 1
    return primes[-1]


def prime_factorization(n: int) -> list:
    """ For a given number n, return a list of its prime factors
    >>> prime_factorization(12)
    [2, 2, 3]
    """
    factors = []
    while n != 1:
        for i in range(2, n+1):
            if n % i == 0:
                factors.append(i)
                n = n // i
                break
    return factors


def sum_of_divisors(n: int) -> int:
    """ For a given number n, return the sum of its divisors
    >>> sum_of_divisors(8)
    15
    """
    divisors = []
    for i in range(1, n+1):
        if n % i == 0:
            divisors.append(i)
    return sum(divisors)


def is_perfect(n: int) -> bool:
    """ For a given number n, return True if n is perfect, and False otherwise
    >>> is_perfect(6)
    True
    >>> is_perfect(28)
    True
    >>> is_perfect(496)
    True
    >>> is_perfect(12)
    False
    """
    return sum_of_divisors(n) == 2*n


def nth_perfect(n: int) -> int:
    """ For a given number n, return the nth perfect number
    >>> nth_perfect(1)
    6
    >>> nth_perfect(2)
    28
    >>> nth_perfect(3)
    496
    """
    perfects = []
    num = 2
    while len(perfects) < n:
        if is_perfect(num):
            perfects.append(num)
        num += 1
    return perfects[-1]


def is_abundant(n: int) -> bool:
    """ For a given number n, return True if n is abundant, and False otherwise
    >>> is_abundant(12)
    True
    >>> is_abundant(18)
    True
    >>> is_abundant(20)
    False
    """
    return sum_of_divisors(n) > 2*n


def nth_abundant(n: int) -> int:
    """ For a given number n, return the nth abundant number
    >>> nth_abundant(1)
    12
    >>> nth_abundant(2)
    18
    """
    abundants = []
    num = 2
    while len(abundants) < n:
        if is_abundant(num):
            abundants.append(num)
        num += 1
    return abundants[-1]


def is_amicable(n: int) -> bool:
    """ For a given number n, return True if n is amicable, and False otherwise
    >>> is_amicable(220)
    True
    >>> is_amicable(284)
    True
    >>> is_amicable(1184)
    True
    >>> is_amicable(1210)
    True
    >>> is_amicable(2924)
    True
    >>> is_amicable(10000)
    False
    """
    return sum_of_divisors(sum_of_divisors(n)) == n and sum_of_divisors(n) != n


def nth_amicable(n: int) -> int:
    """ For a given number n, return the nth amicable number
    >>> nth_amicable(1)
    220
    >>> nth_amicable(2)
    284
    >>> nth_amicable(3)
    1184
    >>> nth_amicable(4)
    1210
    >>> nth_amicable(5)
    2924
    """
    amicables = []
    num = 2
    while len(amicables) < n:
        if is_amicable(num):
            amicables.append(num)
        num += 1
    return amicables[-1]


def is_harshad(n: int) -> bool:
    """ For a given number n, return True if n is Harshad, and False otherwise
    >>> is_harshad(18)
    True
    >>> is_harshad(21)
    True
    >>> is_harshad(1729)
    True
    >>> is_harshad(19)
    False
    """
    return n % sum_of_divisors(n) == 0


def nth_harshad(n: int) -> int:
    """ For a given number n, return the nth Harshad number
    >>> nth_harshad(1)
    1
    >>> nth_harshad(2)
    2
    >>> nth_harshad(3)
    3
    >>> nth_harshad(4)
    4
    >>> nth_harshad(5)
    5
    >>> nth_harshad(6)
    6
    >>> nth_harshad(7)
    7
    >>> nth_harshad(8)
    8
    >>> nth_harshad(9)
    9
    >>> nth_harshad(10)
    10
    >>> nth_harshad(11)
    12
    >>> nth_harshad(12)
    18
    >>> nth_harshad(13)
    20
    >>> nth_harshad(14)
    21
    >>> nth_harshad(15)
    24
    >>> nth_harshad(16)
    27
    >>> nth_harshad(17)
    30
    >>> nth_harshad(18)
    36
    >>> nth_harshad(19)
    40
    >>> nth_harshad(20)
    42
    >>> nth_harshad(21)
    45
    >>> nth_harshad(22)
    48
    >>> nth_harshad(23)
    50
    >>> nth_harshad(24)
    54
    >>> nth_harshad(25)
    60
    """
    harshads = []
    num = 1
    while len(harshads) < n:
        if is_harshad(num):
            harshads.append(num)
        num += 1
    return harshads[-1]


    """
