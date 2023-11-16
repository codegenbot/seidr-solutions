

def same_chars(s0: str, s1: str):
    """
    Check if two words have the same characters.
    >>> same_chars('eabcdzzzz', 'dddzzzzzzzddeddabc')
    True
    >>> same_chars('abcd', 'dddddddabc')
    True
    >>> same_chars('dddddddabc', 'abcd')
    True
    >>> same_chars('eabcd', 'dddddddabc')
    False
    >>> same_chars('abcd', 'dddddddabce')
    False
    >>> same_chars('eabcdzzzz', 'dddzzzzzzzddddabc')
    False
    # create a new string which is the concatenation of both strings
    new_str = s0 + s1
    # create a dictionary to store the characters in the new string
    dic = {}
    # iterate through the new string
    for char in new_str:
        # if the character is in the dictionary, increase its count by 1
        if char in dic:
            dic[char] += 1
        # if the character is not in the dictionary, add it and set its count to 1
        else:
            dic[char] = 1
    # iterate through the dictionary and check if any character has a count of 1
    for value in dic.values():
        if value == 1:
            return False
    return True


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    """
