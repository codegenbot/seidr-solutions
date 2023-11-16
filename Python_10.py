

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
    start_index = end_index = len(string)
    while start_index >= 0:
        if is_palindrome(string[start_index:]):
            end_index = len(string) - (start_index - 1)
            break
        start_index -= 1
    return string + string[:end_index][::-1]
    >>> make_palindrome('cata')
    'catac'
    """
