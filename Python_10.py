

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

    prefix_length = len(string) - len(find_prefix_reversed_length(string))
    return string + string[:prefix_length][::-1]


def find_prefix_reversed_length(string: str) -> str:
    """ Find the longest postfix of the supplied string that is a palindrome. """

    for length in reversed(range(len(string), 0, -1)):
        if is_palindrome(string[-length:]):
            return string[-length:]
    >>> make_palindrome('cata')
    'catac'
    """
