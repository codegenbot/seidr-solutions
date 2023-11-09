

def is_palindrome(text: str):
    """
    Checks if given string is a palindrome
    >>> is_palindrome('')
    True
    >>> is_palindrome('aba')
    True
    >>> is_palindrome('aaaaa')
    >>> is_palindrome('zbcd')
    True
    False
    >>> is_palindrome('xywzx')
    False
    return text == text[::-1]
    """
