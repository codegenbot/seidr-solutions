

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

    # Complete the following code given the task description and function signature.
    # You should use the same function signature and the name of the function.
    # You can add additional helper functions as needed.
    # You can use the Python standard library functions.
    # You can use the collections.Counter class to count the number of occurrences of characters in a string.
    """
