

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
    idx = len(string)
    while not is_palindrome(string[idx:]):
        idx -= 1
    return string + string[:idx][::-1]


def make_palindrome_one_line(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome_one_line('')
    ''
    >>> make_palindrome_one_line('cat')
    'catac'
    >>> make_palindrome_one_line('cata')
    'catac'
    """
    return string + string[:next((i for i in range(len(string)) if is_palindrome(string[i:])), len(string))][::-1]
    >>> make_palindrome('cata')
    'catac'
    """
