

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    for i in range(n-1, 1, -1):
        if n % i == 0:
            return i


def sum_of_divisors(n: int) -> int:
    """ For a given number n, find the sum of all divisors of n, smaller than n
    >>> sum_of_divisors(6)
    6
    """
    sum = 0
    for i in range(1, n):
        if n % i == 0:
            sum += i

    return sum


def is_prime(n: int) -> bool:
    """ For a given number n, determine if n is prime
    >>> is_prime(2)
    True
    """
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False

    return True


def nth_prime(n: int) -> int:
    """ For a given number n, find the nth prime number
    >>> nth_prime(6)
    13
    """
    if n == 1:
        return 2
    count = 1
    test_number = 3
    while count < n:
        if is_prime(test_number):
            count += 1
        test_number += 2

    return test_number - 2


def nth_fibonacci(n: int) -> int:
    """ For a given number n, find the nth Fibonacci number
    >>> nth_fibonacci(6)
    8
    """
    if n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        return nth_fibonacci(n-1) + nth_fibonacci(n-2)


def contains_digit(number: int, digit: int) -> bool:
    """ For a given number and a digit, determine if the number contains that digit
    >>> contains_digit(123, 4)
    False
    """
    while number > 0:
        if number % 10 == digit:
            return True
        number = number // 10

    return False


def contains_digits(number: int, digits: set) -> bool:
    """ For a given number and a set of digits, determine if the number contains all of the digits
    >>> contains_digits(402123, {0, 3, 4})
    True
    """
    for digit in digits:
        if not contains_digit(number, digit):
            return False

    return True


def is_number_balanced(n: int) -> bool:
    """ For a given number, determine if the sum of all of the digits to the left of the middle digit
    equals the sum of all of the digits to the right of the middle digit.
    >>> is_number_balanced(9)
    True
    >>> is_number_balanced(4518)
    True
    >>> is_number_balanced(28471)
    False
    >>> is_number_balanced(1238033)
    True
    """
    n = str(n)
    mid = len(n) // 2
    sum1 = 0
    sum2 = 0

    for i in range(0, mid):
        sum1 += int(n[i])

    for i in range(mid, len(n)):
        sum2 += int(n[i])

    return sum1 == sum2


def count_substrings(haystack: str, needle: str) -> int:
    """ For a given string and a substring, determine how many times the substring occurs in the string
    >>> count_substrings("This is a test string", "is")
    2
    """
    count = 0
    for i in range(0, len(haystack) - len(needle) + 1):
        if haystack[i:i+len(needle)] == needle:
            count += 1

    return count


def zero_insert(n: int) -> int:
    """ For a given number, insert a 0 between digits if they are equal or if they are divisible by 10.
    >>> zero_insert(116457)
    10160457
    >>> zero_insert(55555555)
    505050505050505
    >>> zero_insert(1)
    1
    >>> zero_insert(6446)
    6040406
    """
    n = str(n)
    result = ""
    for i in range(0, len(n)):
        if i == 0:
            result += n[i]

        elif n[i-1] == n[i] or int(n[i-1]) + int(n[i]) == 10:
            result += "0" + n[i]

        else:
        result += n[i]

    return int(result)


def sum_matrix(m: list) -> int:
    """ For a given matrix, find the sum of all elements in the matrix
    >>> sum_matrix([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
    45
    """
    sum = 0
    for row in m:
        for element in row:
            sum += element

    return sum


def nan_expand(times: int) -> str:
    """ For a given number, create a string of the form "Not a [Nth]Nan"
    >>> nan_expand(0)
    ''
    >>> nan_expand(1)
    'Not a Nan'
    >>> nan_expand(2)
    'Not a Not a Nan Nan'
    """
    result = ""
    for i in range(0, times):
        result += "Not a "
    result += "Nan"
    result += " " * times + "Nan"

    return result


def prime_factorization(n: int) -> list:
    """ For a given number, find all prime factors of the number
    >>> prime_factorization(10)
    [(2, 1), (5, 1)]
    >>> prime_factorization(14)
    [(2, 1), (7, 1)]
    >>> prime_factorization(356)
    [(2, 2), (89, 1)]
    >>> prime_factorization(89)
    [(89, 1)]
    >>> prime_factorization(1000)
    [(2, 3), (5, 3)]
    """
    result = []
    i = 2
    while n > 1:
        if n % i == 0:
            count = 0
            while n % i == 0:
                count += 1
                n = n // i
            result.append((i, count))
        i += 1

    return result


def group(items: list) -> list:
    """ For a given list, group the items in sublists based on equality
    >>> group([1, 1, 1, 2, 3, 1, 1])
    [[1, 1, 1], [2], [3], [1, 1]]
    >>> group([1, 2, 1, 2, 3, 3])
    [[1], [2], [1], [2], [3, 3]]
    """
    result = []
    start = 0
    for i in range(1, len(items)):
        if items[i] != items[i-1]:
            result.append(items[start:i])
            start = i

    result.append(items[start:])

    return result


def max_consecutive(items: list) -> int:

    """
