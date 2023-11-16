

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
    # Complete the function
    # Use the commented lines to test your code
    #   s0 = input('Enter the first word: ')
    #   s1 = input('Enter the second word: ')
    #   print(same_chars(s0, s1))


if __name__ == '__main__':
    import doctest

    doctest.testmod()
    """
