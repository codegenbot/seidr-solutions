def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """Find the shortest palindrome that begins with a supplied string."""
    i = len(string) - 1
    while i >= 0 and string[0] != string[i]:
        i -= 1
    return string + string[:i][::-1]