

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    length_of_substring = len(substring)
    result = 0
    for i in range(len(string) - length_of_substring + 1):
        if string[i: i + length_of_substring] == substring:
            result += 1

    return result
    3
    """
