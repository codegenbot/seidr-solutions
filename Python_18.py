

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    start_index = 0
    count = 0
    while start_index < len(string):
        try:
            i = string.index(substring, start_index)
            count += 1
            start_index = i + 1
        except ValueError:
            break
    return count


if __name__ == '__main__':
    import doctest

    doctest.testmod()
    """
