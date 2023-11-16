

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
    # Find suffix that is a palindrome and starting index for reverse prefix
    (rev_prefix_start, suffix) = find_palindromic_suffix(string)
    # Append prefix reversed to the end of the string
    return f'{string}{string[rev_prefix_start::-1]}'
    >>> make_palindrome('cata')
    'catac'
    """
