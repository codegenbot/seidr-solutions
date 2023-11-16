

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
    d0 = {}
    d1 = {}
    for x in s0:
        if x in d0:
            d0[x] += 1
        else:
            d0[x] = 1
    for x in s1:
        if x in d1:
            d1[x] += 1
        else:
            d1[x] = 1
    for x in d0:
        if x not in d1:
            return False
        elif d0[x] != d1[x]:
            return False
    return True
    """
