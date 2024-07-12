def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.isalnum() == False:
        raise ValueError("Input must be alphanumeric")
    i = len(string) - 1
    while i >= 0 and string[i] == string[0].lower():
        i -= 1
    return string.lower() + string[i + 1 :][::-1].lower()