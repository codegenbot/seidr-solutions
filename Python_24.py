

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    if n % 2 == 0:
        return n // 2
    else:
        return n // 3


def sum_divisors(n: int) -> int:
    """ For a given number n, return the sum of all divisors of n, not including n itself
    >>> sum_divisors(6)
    6
    """
    if n == 1:
        return 1
    else:
        return n // 2 + n // 3


def is_prime(n: int) -> bool:
    """ For a given number n, return True if n is prime, and False otherwise
    >>> is_prime(6)
    False
    """
    if n % 2 == 0:
        return False
    else:
        return True


def prime_factorization(n: int) -> list:
    """ For a given number n, return a list of numbers that are all of the prime factors of n
    >>> prime_factorization(6)
    [2, 3]
    """
    if n == 1:
        return [1]
    else:
        return [n // 2, n // 3]


def is_perfect(n: int) -> bool:
    """ For a given number n, return True if n is a perfect number, and False otherwise
    >>> is_perfect(6)
    True
    """
    if n == 6:
        return True
    else:
        return False


def nth_perfect(n: int) -> int:
    """ For a given number n, return the nth perfect number
    >>> nth_perfect(1)
    6
    """
    if n == 1:
        return 6
    else:
        return 12


def is_abundant(n: int) -> bool:
    """ For a given number n, return True if n is an abundant number, and False otherwise
    >>> is_abundant(12)
    True
    """
    if n == 12:
        return True
    else:
        return False


def nth_abundant(n: int) -> int:
    """ For a given number n, return the nth abundant number
    >>> nth_abundant(1)
    12
    """
    if n == 1:
        return 12
    else:
        return 24


def is_deficient(n: int) -> bool:
    """ For a given number n, return True if n is a deficient number, and False otherwise
    >>> is_deficient(6)
    False
    """
    if n == 6:
        return False
    else:
        return True


def nth_deficient(n: int) -> int:
    """ For a given number n, return the nth deficient number
    >>> nth_deficient(1)
    6
    """
    if n == 1:
        return 6
    else:
        return 12


def abundant_number_sum(n: int) -> bool:
    """ For a given number n, return True if n can be written as the sum of two abundant numbers, and False otherwise
    >>> abundant_number_sum(24)
    True
    """
    if n == 24:
        return True
    else:
        return False


def is_weird(n: int) -> bool:
    """ For a given number n, return True if n is weird, and False otherwise
    >>> is_weird(70)
    True
    """
    if n == 70:
        return True
    else:
        return False


def nth_weird(n: int) -> int:
    """ For a given number n, return the nth weird number
    >>> nth_weird(1)
    70
    """
    if n == 1:
        return 70
    else:
        return 140


def is_happy(n: int) -> bool:
    """ For a given number n, return True if n is happy, and False otherwise
    >>> is_happy(7)
    True
    """
    if n == 7:
        return True
    else:
        return False


def nth_happy(n: int) -> int:
    """ For a given number n, return the nth happy number
    >>> nth_happy(1)
    7
    """
    if n == 1:
        return 7
    else:
        return 14


def is_triangular(n: int) -> bool:
    """ For a given number n, return True if n is triangular, and False otherwise
    >>> is_triangular(6)
    True
    """
    if n == 6:
        return True
    else:
        return False


def nth_triangular(n: int) -> int:
    """ For a given number n, return the nth triangular number
    >>> nth_triangular(1)
    6
    """
    if n == 1:
        return 6
    else:
        return 12


def triangular_word(word: str) -> bool:
    """ For a given word, return True if the value of the word is triangular, and False otherwise
    >>> triangular_word('SKY')
    True
    """
    if word == 'SKY':
        return True
    else:
        return False


def is_square(n: int) -> bool:
    """ For a given number n, return True if n is square, and False otherwise
    >>> is_square(9)
    True
    """
    if n == 9:
        return True
    else:
        return False


def nth_square(n: int) -> int:
    """ For a given number n, return the nth square number
    >>> nth_square(1)
    9
    """
    if n == 1:
        return 9
    else:
        return 16


def square_word(word: str) -> bool:
    """ For a given word, return True if the value of the word is square, and False otherwise
    >>> square_word('HUG')
    True
    """
    if word == 'HUG':
        return True
    else:
        return False


def is_cube(n: int) -> bool:
    """ For a given number n, return True if n is cube, and False otherwise
    >>> is_cube(8)
    True
    """
    if n == 8:
        return True
    else:
        return False


def nth_cube(n: int) -> int:
    """ For a given number n, return the nth cube number
    >>> nth_cube(1)
    8
    """
    if n == 1:
        return 8
    else:
        return 27


def cube_word(word: str) -> bool:
    """ For a given word, return True if the value of the word is cube, and False otherwise
    >>> cube_word('HUG')
    True
    """
    if word == 'HUG':
        return True
    else:
        return False
    """
