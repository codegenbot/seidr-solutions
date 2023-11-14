

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    # BEGIN SOLUTION
    if substring == '':
        return len(string) + 1
    count = 0
    while string.find(substring) != -1:
        count += 1
        string = string[string.find(substring) + 1:]
    return count
    # END SOLUTION
    """
