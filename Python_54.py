

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
    if len(s0) != len(s1):
        return False
    i = 0
    while i < len(s0):
        if s0[i] in s1:
            s1 = s1.replace(s0[i], "", 1)
        i += 1
    return len(s1) == 0


print(same_chars('eabcdzzzz', 'dddzzzzzzzddeddabc'))
print(same_chars('abcd', 'dddddddabc'))
print(same_chars('dddddddabc', 'abcd'))
print(same_chars('eabcd', 'dddddddabc'))
print(same_chars('abcd', 'dddddddabce'))
print(same_chars('eabcdzzzz', 'dddzzzzzzzddddabc'))
    """
