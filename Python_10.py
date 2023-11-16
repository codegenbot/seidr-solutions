

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
    # Find the longest suffix that is a palindrome
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            # Append the reverse of the prefix to the end of the string
            return string + string[:i][::-1]
    # If we got here, the string itself is a palindrome
    return string
    >>> make_palindrome('cata')
    'catac'
    """
