

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    to_find = substring
    len_substring = len(substring)
    len_string = len(string)
    count = 0
    for i in range(0, len_string):
        if string[i:i + len_substring] == to_find:
            count += 1
    return count
    """
