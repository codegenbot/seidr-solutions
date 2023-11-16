

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string. It is assumed that the given string is a possible beginning of the palindrome.
    Algorithm idea is simple: find the longest postfix of supplied string that is a palindrome and append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome('')
    ''
    >>> make_palindrome('cat')
    'catac'
    # Complete the following code given the task description and function signature.
    end = len(string)
    while not is_palindrome(string[:end]):
        end -= 1
    # end is the index where the suffix ends
    return string + string[:end - 1:-1]
    >>> make_palindrome('cata')
    'catac'
    """
