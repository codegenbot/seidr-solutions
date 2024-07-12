def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    prefix = ""
    while string.startswith(prefix + prefix[::-1]):
        prefix += prefix[-1]
    return string + (string[::-1]).lstrip(prefix)