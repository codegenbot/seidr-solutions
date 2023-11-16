

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    char_set = set()
    for char in string:
        char_set.add(char.lower())

    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    4
    >>> count_distinct_characters("Jerry jERRY JeRRRY")
    5
    return len(char_set)
    """
