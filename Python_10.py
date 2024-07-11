def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    original = string
    while not is_palindrome(original):
        original += str(len(string))[0] + string[::-1]
        string = ""
    return original