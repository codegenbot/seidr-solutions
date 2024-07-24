def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """Find the shortest palindrome that begins with a supplied string."""
    prefix = string.lower()
    postfix = prefix[::-1].lower()
    i = 0
    while i < len(prefix) and prefix[i] == postfix[len(postfix) - i - 1]:
        i += 1
    return string + postfix[len(postfix) - i :][::-1]