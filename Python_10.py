

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


def print_first_n_lines(filename: str, lines: int):
    """ Print the first N lines from a text file.

    Args:
        filename(str): path to the file
        lines(int): number of lines to print

    Example:
    >>> print_first_n_lines('data.txt', 2)
    line 1
    line 2
    >>> print_first_n_lines('data.txt', 4)
    line 1
    line 2
    line 3
    line 4
    """
    >>> make_palindrome('cata')
    'catac'
    """
