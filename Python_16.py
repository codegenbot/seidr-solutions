

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    4
    string = string.lower()
    char_list = list(string)
    char_list.sort()
    if len(char_list) == 0:
        return 0
    else:
        count = 1
        for i in range(len(char_list) - 1):
            if char_list[i] != char_list[i + 1]:
                count += 1
        return count
    """
