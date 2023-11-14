

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    start = 0
    count = 0
    while start < len(string):
        start = string.find(substring, start) + 1
        if start > 0:
            count += 1
    return count


if __name__ == '__main__':
    import doctest
    doctest.testmod()

    """
