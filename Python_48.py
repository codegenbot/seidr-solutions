

def is_palindrome(text: str):
    """
    Checks if given string is a palindrome
    >>> is_palindrome('')
    True
    >>> is_palindrome('aba')
    True
    >>> is_palindrome('aaaaa')
    True
    >>> is_palindrome('aaaaa')
    True
    >>> is_palindrome('zbcd')
    >>> is_palindrome('xywzx')
    False
    return text == text[::-1]
    """
