

def test_is_palindrome():
    """ Test function. """
    assert is_palindrome('')
    assert is_palindrome('a')
    assert is_palindrome('aa')
    assert is_palindrome('aba')
    assert is_palindrome('abccba')

    assert not is_palindrome('ab')
    assert not is_palindrome('abcef')


def test_make_palindrome():
    """ Test function. """
    assert make_palindrome('') == ''
    assert make_palindrome('a') == 'a'
    assert make_palindrome('abca') == 'abcaba'
    assert make_palindrome('abcbc') == 'abcbc'
    assert make_palindrome('cata') == 'catac'


def make_palindrome(a_string: str) -> str:
    """ Create a shortest palindrome from given string.

    Idea:
    - Imagine if the string were entered in reverse order.
    - Find the longest common substring that occurs both in normal and the reversed string.
    - Append the reverse of a string that precedes the common substring to itself, and add that to the common substring.

    >>> make_palindrome('catt')
    'catattac'

    >>> make_palindrome('cata')
    'catac'

    >>> make_palindrome('cat')
    'catac'

    >>> make_palindrome('')
    ''

    >>> make_palindrome('ca')
    'aca'

    """
    if is_palindrome(a_string):
        return a_string

    reversed_string = a_string[::-1]

    # TODO: Complete the following code given the task description and function signature.
    #
    # The following code is supposed to find the longest suffix of a_string
    # that is the same as the longest prefix of reversed_string.
    # Complete the following code by handling the case when max_found is 0.
    #
    max_found = 0
    for i in range(1, len(a_string)):
        if a_string.endswith(reversed_string[:i]):
            max_found = i

    if max_found == 0:
        raise NotImplementedError

    suffix = reversed_string[:max_found]
    prefix = a_string[:-max_found - 1: -1]

    return a_string + prefix


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
    >>> make_palindrome('cata')
    'catac'
    """
