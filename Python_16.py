

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    4
    string = string.lower()
    result = []
    for i in string:
        if i not in result:
            result.append(i)
    return len(result)
    """
