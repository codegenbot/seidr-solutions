def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = "".join(e for e in string if e.isalnum()).lower()
    return s + s[::-1]