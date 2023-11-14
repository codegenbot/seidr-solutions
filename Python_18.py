

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    count = 0
    len_s = len(string)
    len_t = len(substring)
    for i in range(len_s - len_t + 1):
        if string[i:i + len_t] == substring:
            count += 1
    return count
    3
    """
