def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.isalnum() is False:
        return ""
    prefix = ""
    while not is_palindrome(prefix + string):
        prefix += string[-1]
    return prefix + string + prefix[::-1]