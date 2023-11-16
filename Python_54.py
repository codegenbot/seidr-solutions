

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
    # Replace pass above with your code
    list_s0 = list(s0)
    list_s1 = list(s1)
    list_s0.sort()
    list_s1.sort()
    if list_s0 == list_s1:
        return True
    else:
        return False


def main():
    """
    Call the function in this function.
    """
    print(same_chars('eabcdzzzz', 'dddzzzzzzzddeddabc'))
    print(same_chars('abcd', 'dddddddabc'))
    print(same_chars('dddddddabc', 'abcd'))
    print(same_chars('eabcd', 'dddddddabc'))
    print(same_chars('abcd', 'dddddddabce'))
    print(same_chars('eabcdzzzz', 'dddzzzzzzzddddabc'))


if __name__ == '__main__':
    main()
    """
