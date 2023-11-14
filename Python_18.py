

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('ababab', 'ba')
    2
    >>> how_many_times('aaaa', 'aa')


def is_palindrome(string: str) -> bool:
    """ Check if a string is a palindrome or not.
    >>> is_palindrome('')
    True
    >>> is_palindrome('ab')
    False
    >>> is_palindrome('aba')
    True
    >>> is_palindrome('abba')
    True
    """


def and_join(iterable: list) -> str:
    """ Return a joined with an 'and' between the last two elements the given iterable.
    >>> and_join([])
    ''
    >>> and_join(['a'])
    'a'
    >>> and_join(['a', 'b'])
    'a and b'
    >>> and_join(['a', 'b', 'c'])
    'a, b and c'
    """


def long_word(iterable: list) -> str:
    """ Return the longest word in the given iterable.
    >>> long_word([])
    ''
    >>> long_word(['a'])
    'a'
    >>> long_word(['a', 'b'])
    'a'
    >>> long_word(['a', 'b', 'c'])
    'c'
    """


def reverse_iter(iterable: list) -> iter:
    """ Return a reverse iterator for the given iterable.
    >>> list(reverse_iter([]))
    []
    >>> list(reverse_iter(['a']))
    ['a']
    >>> list(reverse_iter(['a', 'b', 'c']))
    ['c', 'b', 'a']
    """
    3
    """
