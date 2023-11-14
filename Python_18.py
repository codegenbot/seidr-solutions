

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3

    string_length = len(string)
    substring_length = len(substring)
    times = 0
    for index in range(0, string_length, 1):
        if substring == string[index:index + substring_length]:
            times = times + 1
    """
