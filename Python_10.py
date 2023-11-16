

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
    # Hint: You can use s[::-1] to reverse a string s.
    #       You can slice a string s by s[a:b] to get from index a to index b.
    #       To check if a string s is palindrome you can use 'return s == s[::-1]'
    #       You can use is_palindrome() function.

    # TODO: Implement the algorithm.
    return string
    >>> make_palindrome('cata')
    'catac'
    """
