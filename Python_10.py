

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
    for i in range(len(string) + 1):  # We will consider substring with the length from 0 to len(string).
        suffix = string[i:]  # Get the suffix with the current length.
        if is_palindrome(suffix):  # Test if it is a palindrome.
            prefix = string[:i]  # If it is, get the prefix.
            return string + prefix[::-1]  # Return a string concatenation of the prefix and its reverse.
    >>> make_palindrome('cata')
    'catac'
    """
