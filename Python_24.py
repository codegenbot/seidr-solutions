

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    for i in range(n-1, 0, -1):
        if n % i == 0:
            return i


def prime(n: int) -> bool:
    """ For a given number n, check if it is a prime number.
    >>> prime(15)
    False
    >>> prime(7)
    True
    """
    if n == 1:
        return False
    return largest_divisor(n) == 1


def prime_divisors(n: int) -> list:
    """ For a given number n, find all its prime divisors.
    >>> prime_divisors(15)
    [3, 5]
    >>> prime_divisors(16)
    [2]
    """
    result = []
    for i in range(2, n):
        if n % i == 0 and prime(i):
            result.append(i)
    return result


def prime_factorization(n: int) -> list:
    """ For a given number n, find its prime factorization.
    >>> prime_factorization(15)
    [3, 5]
    >>> prime_factorization(16)
    [2, 2, 2, 2]
    """
    result = []
    while n != 1:
        divisor = largest_divisor(n)
        result.append(divisor)
        n = n // divisor
    return result


def is_palindrome(n: int) -> bool:
    """ For a given number n, check if it is a palindrome.
    >>> is_palindrome(12321)
    True
    >>> is_palindrome(12345)
    False
    """
    n_str = str(n)
    return n_str == n_str[::-1]


def is_increasing(n: int) -> bool:
    """ For a given number n, check if its digits are increasing.
    >>> is_increasing(12345)
    True
    >>> is_increasing(54321)
    False
    """
    n_str = str(n)
    for i in range(len(n_str) - 1):
        if int(n_str[i]) >= int(n_str[i + 1]):
            return False
    return True


def is_decreasing(n: int) -> bool:
    """ For a given number n, check if its digits are decreasing.
    >>> is_decreasing(54321)
    True
    >>> is_decreasing(12345)
    False
    """
    n_str = str(n)
    for i in range(len(n_str) - 1):
        if int(n_str[i]) <= int(n_str[i + 1]):
            return False
    return True


def is_bouncy(n: int) -> bool:
    """ For a given number n, check if its digits are neither increasing nor decreasing.
    >>> is_bouncy(134468)
    True
    >>> is_bouncy(66420)
    False
    """
    return not is_increasing(n) and not is_decreasing(n)


def nth_bouncy(n: int) -> int:
    """ Find the n-th bouncy number.
    >>> nth_bouncy(5)
    5
    >>> nth_bouncy(10)
    12
    """
    count = 0
    i = 1
    while count < n:
        if is_bouncy(i):
            count += 1
        i += 1
    return i - 1


def main():
    print(largest_divisor(15))
    print(prime(7))
    print(prime_divisors(15))
    print(prime_factorization(15))
    print(is_palindrome(12321))
    print(is_increasing(12345))
    print(is_decreasing(54321))
    print(is_bouncy(134468))
    print(nth_bouncy(10))


if __name__ == '__main__':
    main()
    """
