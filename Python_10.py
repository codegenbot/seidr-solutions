

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
    def find_palindrome_suffix(string: str) -> str:
        """ Find the longest palindromic suffix of the string """
        for i in range(len(string), 0, -1):
            if is_palindrome(string[-i:]):
                return string[-i:]
        return ''

    palindrome_suffix = find_palindrome_suffix(string)
    return string + string[:-len(palindrome_suffix)][::-1]
    >>> make_palindrome('cata')
    'catac'
    """
