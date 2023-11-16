

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    
    count = 0
    for i in range(len(string)-1):
        if string[i] not in string[i+1:]:
            count += 1
    return count + 1
    4
    """
