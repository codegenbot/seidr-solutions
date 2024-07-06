def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    i = 0
    while i < len(string):
        if is_palindrome(string[i:]):
            return string + string[:i][::-1]
        i += 1
    return string + string[::-1]