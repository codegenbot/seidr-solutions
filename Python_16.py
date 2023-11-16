

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    char_set = set()
    for char in string:
        char_set.add(char.lower())
    return len(char_set)
    """
