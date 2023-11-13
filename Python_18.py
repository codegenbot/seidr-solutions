

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    if len(substring) > len(string):
        return 0
    elif len(substring) == len(string):
        if substring == string:
            return 1
        else:
            return 0
    else:
        count = 0
        for i in range(0, len(string)):
            if string[i:i+len(substring)] == substring:
                count += 1
        return count

    """
