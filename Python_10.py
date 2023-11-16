

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
    suffix_len = 0
    while not is_palindrome(string[-suffix_len:]) and suffix_len < len(string):
        suffix_len += 1
    if suffix_len == len(string):
        return string
    suffix = string[-suffix_len:]
    prefix = string[:-suffix_len]
    return string + prefix[::-1]
    >>> make_palindrome('cata')
    'catac'
    """
