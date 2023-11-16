

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome('')
    >>> make_palindrome('cata')
    'catac'
    >>> make_palindrome('jerry')
    'jerryrrej'
    >>> make_palindrome('ab')
    'aba'
    >>> make_palindrome('abc')
    'abcb'
    >>> make_palindrome('abcd')
    'abcddcba'
    >>> make_palindrome('abcde')
    'abcdedcba'
    """
    ''
    >>> make_palindrome('cat')
    'catac'
    if is_palindrome(string):
        return string

    for i in range(len(string), 0, -1):
        if is_palindrome(string[i:]):
            return string + string[:i][::-1]

    return string
    >>> make_palindrome('cata')
    'catac'
    """
