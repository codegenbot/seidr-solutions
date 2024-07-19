def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    i = len(s) - 1
    while i >= 0 and s[i] == s[0]:
        i -= 1
    return s + s[:i][::-1]