

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    index = 0
    count = 0
    while index < len(string):
        index = string.find(substring, index)
        if index >= 0:
            count += 1
            index += 1
        else:
            return count
    return count
    3
    """
