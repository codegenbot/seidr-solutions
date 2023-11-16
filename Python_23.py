

def is_valid_identifier(s: str) -> bool:
    """
    Return True if and only if the given string is a valid Python identifier.
    >>> is_valid_identifier('a')
    True
    >>> is_valid_identifier('a1')
    True
    >>> is_valid_identifier('a_b')
    True
    >>> is_valid_identifier('a b')
    False
    >>> is_valid_identifier('1a')
    False
    >>> is_valid_identifier('a!')
    False
    """
    if s == '':
        return False
    if not s[0].isalpha():
        return False
    for c in s:
        if not (c.isalpha() or c.isdigit() or c == '_'):
            return False
    return True
