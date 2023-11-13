

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    4

    distinct_characters = set()
    for char in string:
        distinct_characters.add(char.lower())
    return len(distinct_characters)


if __name__ == '__main__':
    print(count_distinct_characters('xyzXYZ'))
    print(count_distinct_characters('Jerry'))
    """
