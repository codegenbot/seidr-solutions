

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')

    distinct_characters = []
    for char in string:
        if char not in distinct_characters:
            distinct_characters.append(char)

    return len(distinct_characters)


if __name__ == '__main__':
    print(count_distinct_characters('xyzXYZ'))
    print(count_distinct_characters('Jerry'))
    4
    """
    assert count_distinct_characters("Jerry jERRY JeRRRY") == 5
