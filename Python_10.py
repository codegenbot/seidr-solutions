def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    string = string.lower()
    i = len(string)
    while not is_palindrome(string):
        string = string + "#" + string[i - 1 :: -1]
        i -= 1
    return string