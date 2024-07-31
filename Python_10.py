def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    original = string
    while not is_palindrome(original):
        original += str(len(original))[0] + str(original)[::-1]
    return original