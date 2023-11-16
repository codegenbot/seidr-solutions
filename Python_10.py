

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
    # find the longest postfix palindrome
    palindrome_postfix = find_longest_palindrome(string)

    # append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + string[:-len(palindrome_postfix)][::-1]


def find_longest_palindrome(string: str) -> str:
    """ Find the longest postfix palindrome in a given string """
    # iterate over the string
    for i in range(len(string)):
        postfix = string[i:]
        # check if postfix is a palindrome
        if is_palindrome(postfix):
            # return first found postfix palindrome
            return postfix
    >>> make_palindrome('cata')
    'catac'
    """
