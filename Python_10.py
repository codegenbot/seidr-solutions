

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def is_valid_parentheses(string: str) -> bool:
    """ Check if a given string is a valid sequence of parentheses.
    >>> is_valid_parentheses('')
    True
    >>> is_valid_parentheses('()')
    True
    >>> is_valid_parentheses('(())')
    True
    >>> is_valid_parentheses('(()')
    False
    >>> is_valid_parentheses(')')
    False
    >>> is_valid_parentheses('())(')
    False
    >>> is_valid_parentheses('(()))')
    False
    """
