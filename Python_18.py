

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    if string.find(substring) == -1:
        return 0
    return max(string.count(substring), how_many_times(string[string.find(substring) + 1:], substring))
    3
    """
