

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
    assert isinstance(string, str)

    max_palindrome_length = 0
    max_palindrome_prefix_index = 0
    for i in range(len(string)):
        for j in range(i, len(string)):
            if is_palindrome(string[i:j]):
                max_palindrome_prefix_index = i
                max_palindrome_length = j - i + 1
    return string + string[:max_palindrome_prefix_index][::-1]


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    >>> make_palindrome('cata')
    'catac'
    """
