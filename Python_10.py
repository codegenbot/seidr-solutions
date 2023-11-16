

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
    # TODO: Complete the following code given the task description and function signature.
    # Hint: Use is_palindrome function to check if a string is a palindrome.
    # Hint: Use string slicing to get a substring.
    # Hint: Use string concatenation to combine two strings.
    # Hint: Use string slicing to reverse a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint: Use string slicing to get a suffix of a string.
    # Hint: Use string slicing to get a substring of a string.
    # Hint: Use string slicing to get a prefix of a string.
    # Hint
    >>> make_palindrome('cata')
    'catac'
    """
