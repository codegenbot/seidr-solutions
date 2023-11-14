

def how_many_times(string: str, substring: str) -> int:
    :param string: original string that will be checked for substrings
    :param substring: substring that will be searched in the original string

    :return: integer with how many times substring was found in string

    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3
    """
