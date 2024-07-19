def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    original = string.lower()
    i = 0
    while i < len(original):
        if not is_palindrome(original[i:]):
            i += 1
        else:
            break

    return original + original[:i][::-1]