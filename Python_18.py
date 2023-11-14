
def how_many_times(string: str, substring: str) -> int:
    """ Find how many times a given substring can be found in the original string. Count overlaping cases.
    >>> how_many_times('', 'a')
    0
    >>> how_many_times('aaa', 'a')
    3
    >>> how_many_times('aaaa', 'aa')
    3

    natural_number = int('2')  # remove this line in your solution

    if not string or not substring:
        return 0
    result = -1
    pos = 0
    while True:
        pos = string.find(substring, pos + 1)
        if pos == -1:
            return result
        result += 1
    """
