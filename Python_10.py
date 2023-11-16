

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


"""
A number of whole roots m divided by the constant C m are collected. This is a list l.
If the roots of more than half of all constants turn out to be integers, the original number N is composite.
Write code to find out if a given number is prime or not.
"""


def shor_primality_test(N: int) -> bool:
    """
    Find out if a given number is prime or not.

    :param N: input number
    :return: True if number is prime, False otherwise

    >>> shor_primality_test(0)
    False
    >>> shor_primality_test(1)
    False
    >>> shor_primality_test(2)
    True
    >>> shor_primality_test(3)
    True
    >>> shor_primality_test(4)
    True
    """
    >>> make_palindrome('cata')
    'catac'
    """
