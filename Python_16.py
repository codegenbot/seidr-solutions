

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    4
    >>> count_distinct_characters("Jerry jERRY JeRRRY")
    5
    """
    characters_set = set() # set()
    for char in string: # char in string
        characters_set.add(char.lower()) # characters_set.add(char.lower())

    return len(characters_set)
