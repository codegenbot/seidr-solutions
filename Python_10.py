def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    prefix = ""
    while len(string) > 0 and not is_palindrome(prefix + string):
        prefix += string[-1]
        string = string[:-1]
    return prefix + string + prefix[::-1]