

def is_prime(n):
    """Return true if a given number is prime, and false otherwise.
    >>> is_prime(6)
    False
    >>> is_prime(101)
    True
    >>> is_prime(11)
    True
    >>> is_prime(13441)
    True
    >>> is_prime(61)
    True
    >>> is_prime(4)
    False
    >>> is_prime(1)
    False
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    i = 3
    while i * i <= n:
        if n % i == 0:
            return False
        i += 2
    return True


def primes_up_to(n):
    """Return a list of all prime numbers less than or equal to n.
    >>> primes_up_to(6)
    [2, 3, 5]
    >>> primes_up_to(10)
    [2, 3, 5, 7]
    >>> primes_up_to(1)
    []
    >>> primes_up_to(20)
    [2, 3, 5, 7, 11, 13, 17, 19]
    >>> primes_up_to(25)
    [2, 3, 5, 7, 11, 13, 17, 19, 23]
    >>> primes_up_to(0)
    []
    """
    primes = []
    for i in range(2, n + 1):
        if is_prime(i):
            primes.append(i)
    return primes


def nth_prime(n):
    """Return the nth prime number.
    >>> nth_prime(1)
    2
    >>> nth_prime(2)
    3
    >>> nth_prime(3)
    5
    >>> nth_prime(4)
    7
    >>> nth_prime(5)
    11
    >>> nth_prime(6)
    13
    >>> nth_prime(7)
    17
    >>> nth_prime(8)
    19
    >>> nth_prime(9)
    23
    >>> nth_prime(10)
    29
    >>> nth_prime(11)
    31
    >>> nth_prime(12)
    37
    >>> nth_prime(13)
    41
    >>> nth_prime(14)
    43
    >>> nth_prime(15)
    47
    >>> nth_prime(16)
    53
    >>> nth_prime(17)
    59
    >>> nth_prime(18)
    61
    >>> nth_prime(19)
    67
    >>> nth_prime(20)
    71
    """
    i = 2
    count = 0
    while True:
        if is_prime(i):
            count += 1
        if count == n:
            return i
        i += 1


def is_palindrome(n):
    """Return true if n is a palindrome, and false otherwise.
    >>> is_palindrome(1)
    True
    >>> is_palindrome(11)
    True
    >>> is_palindrome(121)
    True
    >>> is_palindrome(1221)
    True
    >>> is_palindrome(12321)
    True
    >>> is_palindrome(12331)
    False
    >>> is_palindrome(123421)
    False
    """
    n_str = str(n)
    for i in range(len(n_str) // 2):
        if n_str[i] != n_str[-1 - i]:
            return False
    return True


def largest_palindrome_product(n):
    """Return the largest palindrome made from the product of two numbers
    between 1 and n.
    >>> largest_palindrome_product(1)
    1
    >>> largest_palindrome_product(2)
    2
    >>> largest_palindrome_product(3)
    9
    >>> largest_palindrome_product(4)
    9009
    >>> largest_palindrome_product(5)
    906609
    >>> largest_palindrome_product(6)
    99000099
    >>> largest_palindrome_product(7)
    9966006699
    >>> largest_palindrome_product(8)
    999000000999
    >>> largest_palindrome_product(9)
    99956644665999
    >>> largest_palindrome_product(10)
    9999000000009999
    """
    largest = 0
    for i in range(1, n + 1):
        for j in range(i, n + 1):
            if is_palindrome(i * j) and i * j > largest:
                largest = i * j
    return largest


def smallest_multiple(n):
    """Return the smallest positive number that is evenly divisible by all of
    the numbers from 1 to n.
    >>> smallest_multiple(1)
    1
    >>> smallest_multiple(2)
    2
    >>> smallest_multiple(3)
    6
    >>> smallest_multiple(4)
    12
    >>> smallest_multiple(5)
    60
    >>> smallest_multiple(6)
    60
    >>> smallest_multiple(7)
    420
    >>> smallest_multiple(8)
    840
    >>> smallest_multiple(9)
    2520
    >>> smallest_multiple(10)
    2520
    >>> smallest_multiple(11)
    27720
    >>> smallest_multiple(12)
    27720
    >>> smallest_multiple(13)
    360360
    >>> smallest_multiple(14)
    360360
    >>> smallest_multiple(15)
    360360
    >>> smallest_multiple(16)
    720720
    >>> smallest_multiple(17)
    12252240
    >>> smallest_multiple(18)
    12252240
    >>> smallest_multiple(19)
    232792560
    >>> smallest_multiple(20)
    232792560
    """
    i = n
    while True:
        if is_divisible(i, n):
            return i
        i += n


def is_divisible(m, n):
    """Return true if m is evenly divisible by all numbers from 1 to n, and
    false otherwise.
    >>> is_divisible(1, 1)
    True
    >>> is_divisible(2, 2)
    True
    >>> is_divisible(2, 3)
    False
    >>> is_divisible(6, 3)
    True
    >>> is_divisible(6, 4)
    False
    >>> is_divisible(12, 4)
    True
    >>> is_divisible(12, 5)
    False
    >>> is_divisible(60, 5)
    True
    >>> is_divisible(60, 6)
    True
    >>> is_divisible(60, 7)
    False
    >>> is_divisible(420, 7)
    True
    >>> is_divisible(420, 8)
    False
    >>> is_divisible(840, 8)
    True
    >>> is_divisible(840, 9)
    False
    >>> is_divisible(2520, 9)
    True
    >>> is_divisible(2520, 10)
    True
    >>> is_divisible(2520, 11)
    False
    >>> is_divisible(27720, 11)
    True
    >>> is_divisible(27720, 12)
    True
    >>> is_divisible(360360, 13)
    True
    >>> is_divisible(360360, 14)
    True
    >>> is_divisible(360360, 15)
    True
    >>> is_divisible(360360, 16)
    """
