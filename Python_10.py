

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome('')
    ''
    >>> make_palindrome('cat')
    'catac'


def largest_prime_factor(number: int) -> int:
    """ The prime factors of 13195 are 5, 7, 13 and 29 as a maximum prime factor is calculated.
    :param number: natural positive number, in which the largest prime factor will be init
    :return:
    """
    >>> make_palindrome('cata')
    'catac'
    """
