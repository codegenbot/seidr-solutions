

def is_palindrome(s: str) -> bool:
    """ Test if given string is a palindrome
    >>> is_palindrome('')
    True
    >>> is_palindrome('a')
    True
    >>> is_palindrome('aa')
    True
    >>> is_palindrome('aba')
    True
    >>> is_palindrome('abba')
    True
    >>> is_palindrome('cat')
    False
    >>> is_palindrome('caat')
    False
    >>> is_palindrome('cata')
    False
    """


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome('')
    ''
    >>> make_palindrome('cat')
    'catac'
    >>> make_palindrome('cata')
    'catac'
    """
