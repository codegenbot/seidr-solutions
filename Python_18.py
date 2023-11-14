

def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    return len([i for i in range(len(string)) if string[i:].startswith(substring)])


if __name__ == '__main__':
    print(how_many_times('', 'a'))
    3
    """
