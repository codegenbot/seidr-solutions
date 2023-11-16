

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    if n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)


def is_prime(n: int) -> bool:
    """Return True if n is prime.
    >>> is_prime(6)
    False
    >>> is_prime(7)
    True
    >>> is_prime(8)
    False
    """
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def bin(n: int):
    """Return a binary representation of non-negative integer n.
    >>> bin(0)
    0
    >>> bin(1)
    1
    >>> bin(2)
    10
    >>> bin(8)
    1000
    """
    if n == 2:
        return '10'
    elif n == 1:
        return '1'
    elif n == 0:
        return '0'
    else:
        return str(bin(n // 2)) + str(bin(n % 2))


def count_vowels(s: str) -> int:
    """Return the number of vowels in a string.
    >>> count_vowels('ala')
    2
    >>> count_vowels('ara')
    2
    >>> count_vowels('ara')
    2
    """
    s = s.lower()
    return s.count('a') + s.count('e') + s.count('i') + s.count('o') + s.count('u') + s.count('y')


def count_consonants(s: str) -> int:
    """Return the number of consonants in a string.
    >>> count_consonants('ala')
    1
    >>> count_consonants('ara')
    1
    >>> count_consonants('')
    0
    """
    s = s.lower()
    return sum([s.count(c) for c in 'bcdfghjklmnpqrstvwxz'])


def is_palindrome(s: str) -> bool:
    """Return True if s is a palindrome.
    >>> is_palindrome('ala')
    False
    >>> is_palindrome('kajak')
    True
    >>> is_palindrome('')
    False
    """
    return s == s[::-1]


def is_pangram(s: str) -> bool:
    """Return True if s is a pangram.
    >>> is_pangram('abcdefghijklmnopqrstuvwxyz')
    True
    >>> is_pangram('ala ma kota')
    False
    >>> is_pangram('')
    False
    """
    unique_letters = set(s.lower())
    return len(unique_letters) == 26


def count_words(s: str) -> int:
    """Return the number of words in a string.
    >>> count_words('ala ma kota a kot ma ale')
    6
    >>> count_words('ala ma  kota  a kot ma ale')
    6
    >>> count_words('')
    0
    """
    return len(s.split())


def create_phone_number(n: list) -> str:
    """Return a phone number given 9 digits.
    >>> create_phone_number([1, 2, 3, 4, 5, 6, 7, 8, 9])
    '(123) 456-7890'
    """
    formatted_number = '{} {}-{}'.format(''.join(str(x) for x in n[:3]),
                                         ''.join(str(x) for x in n[3:6]),
                                         ''.join(str(x) for x in n[6:])
                                         )
    return '({})'.format(formatted_number)


def is_valid_card(n: str) -> bool:
    """Return True if credit card number is valid.
    >>> is_valid_card('4111111111111111')
    True
    >>> is_valid_card('4111111111111112')
    False
    >>> is_valid_card('4012888888881881')
    True
    """
    if len(n) != 16:
        return False

    def sum_digits(n: int) -> int:
        sum_ = 0
        while n > 0:
            sum_ += n % 10
            n //= 10
        return sum_

    def double_other_digits(n: str) -> int:
        n = list(n)
        for i in range(0, len(n), 2):
            tmp_double = int(n[i]) * 2
            if tmp_double > 9:
                tmp_double = sum_digits(tmp_double)
            n[i] = tmp_double
        return n

    n = double_other_digits(n)
    return sum(n) % 10 == 0


def is_valid_password(s: str) -> bool:
    """Return True if password is valid.
    >>> is_valid_password('ala ma kota')
    False
    >>> is_valid_password('alaMaKota')
    False
    >>> is_valid_password('alaMaKota123')
    True
    """
    if len(s) < 8:
        return False

    counter_lower = 0
    counter_upper = 0
    counter_numeric = 0

    for i in s:
        if i.isupper():
            counter_upper += 1
        elif i.islower():
            counter_lower += 1
        elif i.isnumeric():
            counter_numeric += 1
    return counter_lower > 0 and counter_upper > 0 and counter_numeric > 0
    """
